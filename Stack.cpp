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
	//index == 0 ? return FALSE_VAL : return block[index--];
	//cout << index ;
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