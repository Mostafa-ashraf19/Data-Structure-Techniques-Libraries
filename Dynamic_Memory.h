
/*template<class T>
class Dynamic_alloc
{
	int current_size,index=0;
	T *ptr;
public:
	Dynamic_alloc();
	~Dynamic_alloc();
	void push_back(T n);
	void set_size(int size);
private:

};
template<class T>
void Dynamic_alloc :: push_back(T n) {
	index++;
	T *temp = new T[index];
	for (int i = 0; i < index; i++)
	{

	}

}
template<class T>
void  Dynamic_alloc ::set_size(int size) {
	//current_size > size ? 1 : 0;
}
template<class T>
Dynamic_alloc::Dynamic_alloc()
{
	current_size = 0;
	ptr = '\0';
}
template<class T>
Dynamic_alloc::~Dynamic_alloc()
{

}*/
class Dynamic_alloc
{
	int current_size;
	int *p;
public:
	Dynamic_alloc();
	~Dynamic_alloc();
	void set_value(int);
	int get();
	void set_size(int size);
private:

};