#include "Queue.h"
template<class T>
Queue<T>::Queue()
{
	front = 0;
	rear = -1;
	size = 0;
}
template<class T>
void Queue<T>::append(T val)
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
T Queue<T>::retrive()
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
int Queue<T>  ::size()
{
	return size;
}