#include "Stack.h"
template <class T>
Stack_Array<T> ::Stack_Array() {
	index = -1;
}
template <class T>
void Stack_Array<T>::push(T val) {
	block[++index] = val;
}
template <class T>
T Stack_Array<T>::pop() {
	return block[index--];
}
template <class T>
T Stack_Array<T> ::get() {
	return block[index];
}
template<class T>
int Stack_Array<T>::size()
{
	return index + 1;
}

/************************ Linked implementation
***********************************/
template<class T>
Stack_Linked<T> ::Stack_Linked()
{
	Top = '\0';
	Size = 0;
}
template<class T>
void Stack_Linked<T> ::push(T val) {
	node<T> *pn = (node<T>*) new node<T>;
	pn->value = val;
	pn->next = Top;
	Top = pn;
	Size++;
}
template<class T>
T Stack_Linked<T> ::pop() {
	T val;
	node<T> *pn = (node<T>*) new node<T>;
	pn = Top;
	Size--;
	Top = Top->next;
	val = pn->value;
	delete pn;
	return val;
}
template<class T>
T Stack_Linked<T> ::get() {
	return Top->value;
}
template<class T>
int Stack_Linked<T> ::size() {
	return Size;
}
