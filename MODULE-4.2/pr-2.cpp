/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include<iostream>
using namespace std;
class BankAccount
{
	private :
		string depositorName;
		int acountNo;
		string AccountType;
		double balance;

	public :
		void set(string Name,int a, string Type,double b)
		{
			depositorName = Name;
			acountNo = a;
			AccountType = Type;
			balance = b;
		}
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<" Rs. credited";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<" Rs. debited";
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\nDepositor Name = "<< depositorName << endl;
			cout<<"\nAccount Number = "<< acountNo << endl;
			cout<<"\nAccount Typr = "<< AccountType << endl;
			cout<<"\nCurrent balance = "<<balance;
		}
};
int main()
{
	BankAccount account1;
	account1.set("John Doe",123456, "Savings", 10000.00);
	account1.get();
	account1.deposit(5000);
	account1.withdraw(10000);
	account1.get();
	return 0;
}
