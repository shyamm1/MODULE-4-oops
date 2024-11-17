/* 7 *//* Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)  */

#include<iostream>
using namespace std;
class person
{
	public :
	void ditails(string name,int age)
	{
		cout<<"\nname is = "<<name;
		cout<<"\nage is = "<<age;
	}
};
class student
{
	public :
		void per(float pct)
		{
			cout<<"\npercentage is = "<<pct;
		}
};
class teacher : public person,public student
{	
	public:
	void display(int salary)
	{
		cout<<"\nsalary = "<<salary;
	}
};
int main()
{
	int age,s;
	float num;
	string name;
	cout<<"\nEnter the name =";
	cin>>name;
	cout<<"\nEnter the age =";
	cin>>age;
	cout<<"\nEnter the percentage =";
	cin>>num;
	cout<<"\nEnter the salary =";
	cin>>s;
	teacher t1;
	t1.ditails(name,age);
	t1.per(num);
	t1.display(s);
	return 0;
}
