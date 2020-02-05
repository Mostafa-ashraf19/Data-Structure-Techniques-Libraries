#ifndef STACK_H
#define STACK_H
#define ARRAY_SIZE 100
enum BOOL_VALUES
{
	FALSE_VAL, TRUE_VAL
};
/********* Stack by array implementation  *************/
template <class T>
class Stack_Array
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

class Stack_Linked
{

};

#endif
