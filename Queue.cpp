#include "Queue.h"

/*
	Queue Array Implemention
*/
template<class T>
QueueA<T>::QueueA()
{
	front = 0;
	rear = -1;
	size = 0;
}
template<class T>
void QueueA<T>::append(T val)
{
	/*
	using concept of circular array
	to avoid problem of moving elements in new array
	each time retrive or append element
	*/
	if (rear == ARRAY_SIZE - 1 && size < ARRAY_SIZE)
		rear = -1;
	else
	{
		block[++rear] = val;
		size++;
	}
}
template<class T>
T QueueA<T>::retrive()
{
	/*
	using concept of circular array
	to avoid problem of moving elements in new array
	each time retrive or append element
	*/
	if (size == 0)
		return -1;
	else
	{
		size--;
		int temp = block[front];
		front = (front + 1) % ARRAY_SIZE;
		return temp;
	}
}
template<class T>
int QueueA<T>  ::QSize()
{
	return size;
}

/*******
			end of Queue array implemntion
				*********/



/***********
	Queue linked list implemention
		************/
template<class T>
int QueueL<T> ::QSize() {
	return size;
}
template<class T>
QueueL<T>::QueueL()
{
	head = NULL;
	tail = NULL;
	size = 0;
}

template<class T>
void QueueL<T> ::append(T val)
{
	noode<T> *pn = (noode<T>*)new noode<T>;
	pn->value = val;
	pn->next = NULL;
	if (!tail)
	{
		head = pn;
	}
	else
	{
		tail->next = pn;
	}
	tail = pn;
	size++;
}

template<class T>
T QueueL<T> ::retrive() {
	noode<T> *pn = (noode<T>*)new noode<T>;
	if (!head) return -1;
	pn = head;
	head = head->next;
	T temp = pn->value;
	delete pn;
	if (!head)
		tail = NULL;
	size--;
	return temp;
}

