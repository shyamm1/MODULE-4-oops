/* 9 *//* Write a program to Mathematic operation like Addition, Subtraction,Multiplication, 
Division Of two number using different parameters and Function Overloading */
#include<iostream>
using namespace std;
class math
{
	public :
			void sum(int a,int b)
			{
				int ans;
				ans=a+b;
				cout<<"\nAddition of "<<a<<" and "<<b<<" is = "<<ans;		
			}
			void sum(double a,double b)
			{
				int ans;
				ans=a-b;
				cout<<"\nSubtraction of "<<a<<" and "<<b<<" is = "<<ans;
			}
			void sum(int a,double b)
			{
				int ans;
				ans=a*b;
				cout<<"\nMultiplication  of "<<a<<" and "<<b<<" is = "<<ans;
			}
			void sum(float a,float b)
			{
				int ans;
				ans=a/b;
				cout<<"\nDivision of "<<a<<" and "<<b<<" is = "<<ans;
			}
};
int main()
{
	
	math m1;
	m1.sum(1,2);
	
	math m2;
	m2.sum(25.25,33.33);
	
	math m3;
	m3.sum(5,85.66);
	
	math m4;
	m4.sum(78.56,78.56);
	return 0;
}

