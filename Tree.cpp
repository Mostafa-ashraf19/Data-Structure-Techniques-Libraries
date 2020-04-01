#include "Tree.h"

#include <cassert>

// Use (void) to silent unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))
void Tree::add(int value)
{
	Node* current=nullptr;
	Node* prev= nullptr;
	Node* pn = new  Node;
	pn->element = value;
	pn->left = nullptr;
	pn->right = nullptr;
	if (Head == nullptr)
	{
		Head = pn;
	}
	else
	{
		current = Head;
		while (current) {
			prev = current;
			assert("Not Allowed Repeat Values" && current->element != value);
			if (current->element < value)
				current = current->right;
			else
				current = current->left;
		}
		if (prev->element < value)
			prev->right = pn;
		else
			prev->left = pn;
	}
}