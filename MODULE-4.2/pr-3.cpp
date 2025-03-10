/*3.Write a program to find the multiplication values and the cubic values using
inline function */

#include<iostream>
using namespace std;
inline int multiplication(int num1,int num2) {return num1 * num2;};
inline int cube(int num) {return num*num*num;};
int main()
{
    int num1,num2;
    cout<<"\nEnter the value of  num1 = ";
    cin>>num1;
    cout<<"\nEnter the value of  num2 = ";
    cin>>num2;
    cout<<"\n Multiplication of "<<num1<<" And "<<num2<<" is " <<multiplication(num1,num2);


    cout<<"\nEnter the number = ";
    cin>>num1;
	cout<<"\nCube of 3 is = "<<cube(num1);	
	return 0;
}
