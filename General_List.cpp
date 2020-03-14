#ifndef GENERAL_LIST
#define GENERAL_LIST
#include "General_List.h"
/*	Single linked list array implemention	start */
template<class T>
listA_S<T> ::listA_S() :size(0),Head(ARRAY_SIZE/2),tail((ARRAY_SIZE / 2)){}

template<class T>
void listA_S<T> ::push_front(T val)
{

	if (Head)
	{
		List[Head--] = val;
		size++;
	}
	else
		return;
}
template<class T>
void listA_S<T> :: push(int index, T val) {
	return;
}
template<class T>
void listA_S<T> ::push_back(T val)
{
	if (tail != ARRAY_SIZE - 1)
	{
		List[++tail] = val;
		size++;
	}
	else
		return;
}
template<class T>
T listA_S<T> ::pop_back()
{
	if (Head == tail)
		return -1;
	else
	{
		size--;
		return List[tail--];
	}
}
template<class T>
T listA_S<T> ::pop_front()
{
	if (Head == tail)
		return -1;
	else
	{
		size--;
		return List[++Head];
	}
}
template<class T>
T listA_S<T> ::pop(int index)
{
	return (Head <= index && index <= tail) ? List[index] : -1;
}
template<class T>
int listA_S<T> ::LSize()
{
	return size;
}
/*	Single linked list array implemention end */
/*	Single linked list linked implemention start */
template<class T>
listL_S<T> ::listL_S() : head('\0'),tail('\0'),size(0) {}

template<class T>
void listL_S<T> ::push_front(T val)
{
	Node<T> * pl = (Node<T> *)new Node<T>;
	pl->data = val;
	if (!head)
		tail = pl;
	else
		pl->next = head;
	head = pl;
	size++
}
template<class T>
void listL_S<T> ::push_back(T val)
{
	Node<T> * pl = (Node<T> *)new Node<T>;
	pl->data = val;
	pl->next = '\0';
	if (!tail)
		head = pl;
	else 
		tail->next = pl;
	tail = pl;
	size++;
}


#endif