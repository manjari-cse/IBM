1.Create a class called calculated in that have three methods with same name as Add() But it should have diffrent parameters (With int(2) parmeters,.with Float (2)parameters,with int(3) parameters,with double(3) parameters).
#include<iostream>
using namespace std;
class addition
{
	public:
	void add(int i,int j)
	{
		cout<<"2 int values passed"<<i+j<<"\n";
	}
	void add( float k, float l)
	{
		cout<<"2 float values passed "<<k+l<<"\n";
	}
		void add(int m,int n,int o)
	{
		cout<<"3 int values passed"<<m+n+o<<"\n";
	}
		void add( double x, double y,double z)
	{
		cout<<"3 double values passed "<<x+y+z<<"\n";
	}
};
int main()
{
	int i=2,j=3,m=4,n=5,o=6;
	float k=2.2,l=3.3;
	double x=3.33,y=4.44,z=4.44;
	addition a;
	a.add(i,j);
	a.add(k,l);
	a.add(m,n,o);
	a.add(x,y,z);
	
}
