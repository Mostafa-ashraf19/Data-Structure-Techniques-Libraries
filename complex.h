#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;
class complex
{
public:
	class Polar_comp
	{
	public:
		Polar_comp(float r, float t);
		~Polar_comp();
		Polar_comp multi(Polar_comp);
		float getRad();
		float getTheta();
	private:
		float Rad, theta;
	};
	complex();
	complex(float r, float i);
	~complex();
	void setcomlex(float R, float i) ;
	void setimg(float i);
	void setreal(float r);
	float getreal();
	float getimg();
	complex add(complex c);
	//complex operator++(complex);
	complex operator +(complex );
	void operator=(complex);
	//complex operator -(complex);
	friend ostream & operator <<(ostream &, const complex &);
	//friend  void operator <<(ostream &, const complex&);
	friend void displayy();
	//friend class helllo ;
private:
	float Real, img;
	
};
float complex::Polar_comp:: getTheta(){
	return theta;
}
float complex::Polar_comp::getRad() {
	return Rad;
}
complex::Polar_comp complex ::Polar_comp ::multi(Polar_comp c) {
	complex ::Polar_comp  p(0,0);
	 p.Rad=Rad*c.Rad;
	p.theta= theta + c.theta;
	return p;
}
complex :: Polar_comp ::Polar_comp(float r,float t)
{
	Rad = r;
	theta = t;
}
complex :: Polar_comp:: ~Polar_comp()
{
} 
#endif // !COMPLEX_H
//extern complex Cout;