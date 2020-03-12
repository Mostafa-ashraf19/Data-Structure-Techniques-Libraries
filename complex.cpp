#include "complex.h"
float complex::getimg() {
	return img;
}
float  complex::getreal() {
	return Real;
}
void complex::setreal(float r) {
	Real = r;
}
complex::complex(float r, float i) {
	Real = r;
	img = i;
}
void complex::setimg(float i) {
	img = i;
}
void complex::setcomlex(float R, float i) {
	Real = R;
	img = i;
}
ostream & operator << (ostream &out, const complex &c) {
	out << c.Real << "+i" << c.img;
	return out;
}
complex complex::add(complex c) {
	complex res;
	res.Real = Real + c.Real;
	res.img = img + c.img;
	return res;
}
complex::complex()
{
	Real = 0;
	img = 0;
	//cout << img << "  " << Real<<endl;
}
void  complex:: operator=(complex c) {
	Real = c.Real;
	img = c.img;
}
complex complex:: operator+(complex c) {
	complex result;
	result.Real = Real + c.Real;
	result.img = img + c.img;
	return result;
	//	return;
}
complex::~complex()
{
}




