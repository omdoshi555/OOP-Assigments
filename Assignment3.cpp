#include<iostream>
using namespace std;
//Base Class
class staff
{
	protected:
		string name, dept;
		int staffID;
	public:
		void accept();
		void display();
};
void staff :: accept()
{
	cout << "\nEnter Name: ";
	cin >> name;
	cout << "Enter Department: ";
	cin >> dept;
	cout << "Enter Staff ID: ";
	cin >> staffID;
}
void staff :: display()
{
	cout << "\nName: " << name;
	cout << "\nDepartment: " << dept;
	cout << "\nStaff ID: " << staffID;
}
//Derived Class 1
class teacher : public staff
{
		string subject;
		int experience;
	public:
		void accept1();
		void display1();
};
void teacher :: accept1()
{
	accept();
	cout << "Enter Subject: ";
	cin >> subject;
	cout << "Enter Experience of Teacher: ";
	cin >> experience;
}
void teacher :: display1()
{
	display();
	cout << "\nSubject: " << subject;
	cout << "\nExperience: " << experience;
}
//Derived Class 2
class supportStaff : public staff
{
		string areaOfSupport;
	public:
		void accept2();
		void display2();
};
void supportStaff :: accept2()
{
	cout << "\nEnter Area of Support: ";
	cin >> areaOfSupport;
}
void supportStaff :: display2()
{
	cout << "\nArea of Support: " << areaOfSupport;
}
int main()
{
	int n;
	cout << "Enter the number of teachers: ";
	cin >> n;
	teacher obj1[n];
	for(int i=0; i<n; i++)
	{
		cout << "Staff " << i+1;
		obj1[i].accept1();
	}
	cout << "\n-----Staff Database-----";
	for(int i=0; i<n; i++)
	{
		cout << "\nStaff " << i+1;
		obj1[i].display1();
	}
	int m;
	cout << "\n\nEnter the number of support staff: ";
	cin >> m;
	supportStaff obj2[m];
	for(int i=0; i<m; i++)
	{
		cout << "Staff " << i+1;
		obj2[m].accept2();
	}
	cout << "\n-----Supporting Staff-----";
	for(int i=0; i<m; i++)
	{
		cout << "\nStaff " << i+1;
		obj2[m].display2();
	}
	return 0;
}
