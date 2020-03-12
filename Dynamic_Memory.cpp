#include"Dynamic_Memory.h"
Dynamic_alloc:: Dynamic_alloc(){
	current_size = 0;
	p = '\0';
}
//Dynamic_alloc ::~Dynamic_alloc(){}
void Dynamic_alloc ::set_value(int x){
	set_size(current_size + 1);
	p[current_size - 1] = x;

}
int Dynamic_alloc::get(){
	return  p[(current_size--)-1];
}
void Dynamic_alloc::set_size(int size){
	if (current_size == 0) {
		p = new int[size];
		current_size = size;
		return;
}
	current_size = (current_size >= size) ? current_size : size;
	int *tp = new int[current_size];
	for (int i = 0; i < current_size; i++)
	{
		tp[i] = p[i];
	}
	delete []p;
	p = tp;
}