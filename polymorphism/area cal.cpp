2..Create a class called as shapes and it should have 4 methods with same name area such that it gives area of Square,Circle,Rectangle and Triangle by using Overloading concepts.
#include<iostream>
# define pi 3.14;
using namespace std;
class are
{
	public:
	void area(int a)
	{
		cout<<"area of square"<<a*a<<"\n";
	}
	void area( float r)
	{
		cout<<"area of circle"<<3.14*r*r<<"\n";
	}
		void area(int b,int h)
	{
		cout<<"area of triangle"<<0.5*b*h<<"\n";
	}
		void reactangle(float he,float w)
	{
		cout<<"area of rectangle"<<he*w<<"\n";
	}
};
int main()
{
	int a=2,b=3,h=4;
	float r=2.4,he=3.3,w=2.2;
	are al;
	al.area(a);
	al.area(r);
	al.area(b,h);
	al.area(he,w);
	
}
