#ifndef STACK_H
#define STACK_H
//#define NULL '\0'
#define ARRAY_SIZE 100
enum BOOL_VALUES
{
	FALSE_VAL, TRUE_VAL
};
/*template <class T>
class stack
{
	void push(T) = 0;
	T pop() = 0;
	T get() = 0;
	int size() = 0;
};*/
/********** Stack by array implementation  *************/
template <class T>
class Stack_Array //: public stack
{
	int index;
	T block[ARRAY_SIZE];
public:
	Stack_Array();
	void push(T);
	T pop();
	T get();
	int size();
};
template<class T>
class node
{	
public:
	node *next;
	T value;
};
/************************ Linked implementation
***********************************/
template<class T>
class Stack_Linked //: public stack
{
	node<T> *Top;
	int Size;
public:
	Stack_Linked();
	void push(T);
	T pop();
	T get();
	int size();
};

#endif
