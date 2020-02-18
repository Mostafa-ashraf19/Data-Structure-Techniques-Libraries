#ifndef  QUEUE_H
#define QUEUE_H

#define ARRAY_SIZE 100
/*************** implement queue using circular array to avoid moveing each time *********************/
/*
	i'm using a object oriented programming conceptes like teamplates and another concepts 
	in implemntion
*/
template<class T>
class Queue
{
	T block[ARRAY_SIZE];
	int front, rear, size;
public:
	Queue();
	void append(T val);
	T retrive();
private:

};


#endif