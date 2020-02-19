#ifndef  QUEUE_H
#define QUEUE_H

#define ARRAY_SIZE 100

/*
	using in implemention 
	object oriented programming conceptes 
	like (polymorphism,
	teamplates, ....) 
	and another concepts 
*/

template<class T>
class Queue
{
	/*
	Abstract base class
	*/
public:

	virtual void append(T val) = 0;
	virtual T retrive() = 0;
	virtual int QSize() = 0;
};

template<class T>
class QueueA : public Queue<T>
{
	/*
	Drived Class
	*/
	/********
	implement QueueA related to Araay 
	using "Circular Array Concept"
	to avoid moveing each time appednd or retrive
	*/
	T block[ARRAY_SIZE];
	int front, rear, size;
public:
	QueueA();
	void append(T val);
	T retrive();
	int QSize();
};

/***********
linked list implemention
************/

template<class T>
class noode
{
public:
	noode<T> *next;
	T value;
};
template<class T>
class QueueL : public Queue<T>
{
	/*
	Drived Class
	*/
private:
	noode<T> * head;
	noode<T> *tail;
	int size;
public:
	QueueL();
	void append(T val);
	T retrive();
	int QSize();
};
#endif