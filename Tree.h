#pragma once
#ifndef TREE_
#define TREE_

//#include<cassert>

//#define ASSERT_MESG(exp,mesg)	assert((void(mesg),exp))

class Node
{
public:
	int element;
	Node* right;
	Node* left;
};
class Tree
{
	Node *Head;
public:
	Tree(): Head(nullptr){}
	void add(int);
	bool Search(int);
};

	
#endif
