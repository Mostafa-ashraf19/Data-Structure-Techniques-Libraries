/*
	list is abstract class
	listA related to array implemntion
	listL_S related to linked implemntion single linked list
	listL_D	related to linked implemntion double linked list
*/
#define ARRAY_SIZE  100
template<class T>
/* Absract Calss  */
class list_S 
{
public:
	virtual void push_back(T val) = 0;
	virtual void push_front(T val) = 0;
	virtual void push(int index, T val) = 0;
	virtual T pop_back() = 0;
	virtual T pop_front() = 0;
	virtual T pop(int index) = 0;
	virtual int LSize() = 0;
};

template<class T>
class listA_S  : public list_S<T> 
{
	int Head, tail,size;
	T List[ARRAY_SIZE];
public:
	listA_S();
	void push_front(T);
		void push_back(T);
		T pop_back();
		T pop_front();
		void push(int, T);
		T pop(int);
		int LSize();
};
template<class T>
class Node
{
	T data;
	Node *next;
};

template<class T>
class listL_S : public list_S<T>
{
	Node *head;
	Node *tail;
	int size;
public:
	listL_S();
	void push_front(T);
	void push_back(T);
	T pop_back();
	T pop_front();
	T pop(int);
	int LSize();

};
