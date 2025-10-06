#include<iostream>
#include<fstream>
#include <string>
#include <iostream>

using namespace std;
class inventory 
{
	string name;
	int itemId;
	float quantity;
	double price;

public:
	void accept();
	void display();
};

void inventory :: accept() 
{
	cout << "Enter the name: ";
	cin >> name;
	cout << "Enter the itemId: ";
	cin >> itemId;
	cout << "Enter the quantity: ";
	cin >> quantity;
	cout << "Enter the price: ";
	cin >> price;
}
void inventory :: display() 
{
	cout << "\nItem Name: " << name << endl;
	cout << "Item Id: " << itemId << endl;
	cout << "Item Quantity: " << quantity << endl;
	cout << "Item Price: " << price << endl;
}

int main() 
{	
	int n;
	cout << "Enter number of items : ";
	cin >> n;
	
	ofstream file_obj;
	inventory obj[n];
	for(int i=0; i<n; i++)
	{
		obj[i].accept();
		file_obj.open("Input.txt");
		file_obj.write((char* )&obj, sizeof(obj));
		file_obj.close();
	}
	for(int i=0; i<n; i++)
	{	
		ifstream file_obj2;
		file_obj2.open("Input.txt");
		file_obj2.read((char*) &obj, sizeof(obj));
		obj[i].display();
		file_obj2.close();
	}
	return 0;
}

