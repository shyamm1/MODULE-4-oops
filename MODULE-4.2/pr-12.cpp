/* 12 *//* Write a program to calculate the area of circle, rectangle and triangle using Function Overloading   
	1:Rectangle: Area * breadth   
	2:Triangle: ? *Area* breadth  
 	3:Circle: Pi * Area *Area */
#include<iostream>
using namespace std;
class Shape
{
	public :
		void shape(string n,double r)
		{
			cout<<"\nArea of "<<n<<" is = "<<3.14*(r*r);
		}
		void shape(string n,double base,double height)
		{
			cout<<"\nArea of "<<n<<" is = "<<0.5*(base*height);
		}
		void shape(string n,int l,int b)
		{
			cout<<"\nArea of "<<n<<" is = "<<l*b;
		}
};
int main()
{
	Shape s1;
	s1.shape("Circle",8.4);
	Shape s2;
	s2.shape("Triangle",5.4,5.7);
	Shape s3;
	s3.shape("Recatangle",5,4);
	return 0;
}
