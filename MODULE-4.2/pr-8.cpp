/* 8 *//*  Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)  */

#include<iostream>
using namespace std;

class student
{
	public :
		void number(int roll)
		{
			cout<<"\nRoll no is "<<roll;			
		}
};
class test : public student
{
	public :
		
		int math=50;
		int english=50;
		
		
};
class result : public  test
{
	public :
		
		void get()
		{
			cout<<"\nmath mark is = "<<math;
			cout<<"\nenglish mark is = "<<english;
			int total;
			total=math + english;
			cout<<"\nTotal  mark is = "<<total;
		}
};	
int main()
{
	result r1;
	r1.number(101);
	r1.get();
	return 0;
}
