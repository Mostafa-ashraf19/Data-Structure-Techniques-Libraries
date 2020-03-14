#ifndef GENERAL_LIST
#define GENERAL_LIST
#include "General_List.h"
/*	Single linked list array implemention	*/
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
void listA_S<T> ::push_back(T val)
{
	if (tail != ARRAY_SIZE - 1)
	{
		List[tail++] = val;
		size++;
	}
	else
		return;
}
template<class T>
T listA_S<T> ::pop_back()
{
	if (Head == tail)
		return -1
	else
	{
		size--;
		return List[--tail];
	}
}
template<class T>
T listA_S<T> ::pop_front()
{
	if (Head == tail)
		return -1
	else
	{
		size--;
		return List[++head];
	}
}
template<class T>
T listA_S<T> ::pop(int index)
{
	return (head <= index && index <= tail) ? list[index] : -1;
}
template<class T>
int listA_S<T> ::LSize()
{
	return size;
}

#endif