/*4.Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include<iostream>

using namespace std;

class Sum
{
	public :
		Sum(int A,int B)
		{
			int result1,result2,result3,result4;
			result1 = A + B;
			result2 = A - B;
			result3 = A / B;
			result4 = A * B;
			cout<<"\nAddition"<< A <<" And "<<B<<"is = "<<result1;
			cout<<"\nSubtraction"<< A <<"And"<<B<<"is = "<<result2;
			cout<<"\nDivision"<< A <<"And"<<B<<"is = "<<result3;
			cout<<"\nMultiplication"<< A <<"And"<<B<<"is = "<<result4;
		}
};
int main()
{
	Sum s1(50,20);
	return 0;
}
