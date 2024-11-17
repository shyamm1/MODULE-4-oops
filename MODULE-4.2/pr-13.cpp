// 13 /*Write a program to swap the two numbers using friend function without using third variable  */
#include<iostream>
using namespace std;
class Swapping
{
	private :
		int x;
		int y;
	public :
		void setvalue(int a,int b)
		{
			x = a;
			y = b;
		}
		friend void swapvalues(Swapping &obj);
		void display()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y;
		}
};
void swapvalues(Swapping &obj)
{
	obj.x=obj.x+obj.y;
	obj.y=obj.x-obj.y;
	obj.x=obj.x-obj.y;
}
int main()
{
	Swapping s1;
	
	s1.setvalue(45,50);
	swapvalues(s1);
	s1.display();
	return 0;
}
