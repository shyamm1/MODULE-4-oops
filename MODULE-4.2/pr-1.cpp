//1.WAP to create simple calculator using class.

#include<iostream>

using namespace std;

class Calculator
{
	public :
		void addition()
		{
			int A,B,result;
			cout<<"\nEnter the value of A = ";
			cin>>A;
			cout<<"\nEnter the value of B = ";
			cin>>B;
			result = A + B;
			cout<<"Addition of"<< A <<" And "<< B <<"is = "<<result;
		}
		void subtract()
		{
			int A,B,result;
			cout<<"\nEnter the value of A = ";
			cin>>A;
			cout<<"\nEnter the value of B = ";
			cin>>B;
			result = A - B;
			cout<<"Subtract of"<< A <<" And "<< B <<"is = "<<result; 
		}
		void multiplication()
		{
			int A,B,result;
			cout<<"\nEnter the value of A = ";
			cin>>A;
			cout<<"\nEnter the value of B = ";
			cin>>B;
			result = A * B;
			cout<<"Subtract of"<< A <<" And "<< B <<"is = "<<result; 
		}
		void divide()
		{
			int A,B,result;
			cout<<"\nEnter the value of A = ";
			cin>>A;
			cout<<"\nEnter the value of B = ";
			cin>>B;
			result = A / B;
			cout<<"Subtract of"<< A <<" And "<< B <<"is = "<<result; 
		}
		
};

int main()
{
	Calculator c1;
	c1.addition();
	c1.subtract();
	c1.multiplication();
	c1.divide();
}
