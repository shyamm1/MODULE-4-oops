/* Write a program to find the max number from given two numbers using friend function*/
#include<iostream>
using namespace std;
class number
{
	private :
		int num1;
		int num2;
	public :
		void setvalue(int a , int b)
		{
			num1 = a;
			num2 = b;	
		}		
		friend void max(number &obj);
		void display()
		{
			cout<<"\nValue of num1 ="<<num1;
			cout<<"\nValue od num2 ="<<num2;
		}
};
void max(number &obj)
{
	if(obj.num1>obj.num2)
	{
		cout<<"\nnum1 is biggest";
	}
	else
	{
	cout<<"\nnum2 is biggest";
	}
}

int main()
{
	number n1;
	n1.setvalue(70,30);
	n1.display();
	max(n1);
	
	return 0;
}
