
#include<iostream>
#include<string>
using namespace std;
class bank_account
{
	private:
		string name;
		string account_type;
		int account_number;
		float balance;
	public:
		bank_account(string n, string at, int an, float bal);
		void deposit(void);
		void withdraw(void);
		void display(void);
};
bank_account :: bank_account(string n, string at, int an, float bal){
	name = n;
	account_type = at;
	account_number = an;
	balance = bal;
}
void bank_account :: display(){
	cout << "\nName: " << name;
	cout << "\nAccount type: " << account_type;
	cout << "\nAccount number: " << account_number;
	cout << "\nBank balance: " << balance;
}
void bank_account :: deposit(){
	float deposit_amount;
	cout << "\nEnter amount to deposit: ";
	cin >> deposit_amount;
	balance += deposit_amount;
	display();
}
void bank_account :: withdraw(){
	float withdraw_amount;
	cout << "\nEnter amount to withdraw: ";
	cin >> withdraw_amount;
	balance -= withdraw_amount;
	display();
}
int main()
{
	char ch;
	int choice;
	string n,at;
	int an;
	float bal;
	cout << "Enter Name : ";
	cin >> n;
	cout << "Enter Account Type : ";
	cin >> at;
	cout << "Enter Account Number : ";
	cin >> an;
	cout << "Enter balance : ";
	cin >> bal;
	bank_account obj1(n,at,an,bal);
	do{
		cout << "Select a Option: \n1. Display \n2. Deposit \n3. Withdraw \n";
		cin >> choice;
		switch(choice)
		{
		case 1 :
			{
				obj1.display();
				break;
			}
		case 2 :
			{
				obj1.deposit();
				break;
			}
		case 3 :
			{
				obj1.withdraw();
				break;
			}
		case 4 :
			{
				break;
			}
		}
		cout << "\nDo you want to continue(y/n) : \n";
		cin >> ch;
		}
	while(ch == 'y' || ch == 'Y');
	}
