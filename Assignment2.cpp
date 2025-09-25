// Name: Om Tanoj Doshi
// PRN : B24CE1066
// Assignment No. 2
// Employee Information System
// Develop a program in C++ to create a database of an employee&#39;s information
// system containing the following fields: Name, employee ID, Department, Date
// of Joining, Contact address, Telephone number etc. Construct the database
// with suitable member functions to accept and print employee details. Make use
// of constructor types, destructor, static members, inline function and dynamic
// memory allocation using operators-new and delete.
#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		long int emp_id;
		string department;
		string date_of_Join;
		string address;
		int telephone;
		static int count;
	public:
		inline void title();	//Inline function
		employee();	//Default Constructor
		employee(string n, long int id, string dep, string date, string add, int tele);		//Parameterized Construstor
		employee(employee &obj);	//Copy Constructor
		void display();
		void display2();
		~employee();
		static void displayCount();
};

int employee :: count = 0;
employee :: employee()
{
	string om,asefr;
	count++;
	cout << "Default Constructor Called";
	name = om;
	emp_id = 12;
	date_of_Join = 12;
	address = asefr;
	telephone = 12323;
}
void employee :: title()
{
	cout << "\nWelcome to Employee System: \n";
}
employee :: employee(string n, long int id, string dep, string date, string add, int tele)
{
	cout << "\nParameterized Constructor Called";
	name = n;
	emp_id = id;
	department = dep;
	date_of_Join = date;
	address = add;
	telephone = tele;
	count++;
}
void employee :: display()
{
	cout << "\nName : " << name;
	cout << "\nEmployee ID : " << emp_id;
	cout << "\nDepartment : " << department;
	cout << "\nDate of Joining : " << date_of_Join;
	cout << "\nAddress : " << address;
	cout << "\nTele no. : " << telephone;
}
employee :: employee(employee &obj)
{
    name = obj.name;
    emp_id = obj.emp_id;
    department = obj.department;
    date_of_Join = obj.date_of_Join;
    address = obj.address;
    telephone = obj.telephone;
    count++;
}
void employee :: display2()
{
	cout << "\nCopy constructor Called";
}
employee :: ~employee()
{
	cout << "\nDestructor is called!";
	count--;
}
void employee :: displayCount()
{
	cout << "\nCount : " << count;
}
int main()
{
	employee obj1;
	obj1.title();
	string n;
	long int id;
	string dep;
	string date;
	string add;
	int tele;
	cout << "Enter Name: ";
	cin >> n;
	cout << "Enter ID: ";
	cin >> id;
	cout << "Enter Department: ";
	cin >> dep;
	cout << "Enter date of joining: ";
	cin >> date;
	cout << "Enter Address: ";
	cin >> add;
	cout << "Enter telephone no.: ";
	cin >> tele;
	employee obj2(n,id,dep,date,add,tele);
	obj2.display();
	employee obj3 = obj2;
	obj3.display2();
	employee *ptr = new employee(n,id,dep,date,add,tele);	//Pointer
	ptr -> display();
	employee :: displayCount();
	delete ptr;
	return 0;
}
