#include<iostream>
using namespace std;
class Shape
{
protected:
	int X, Y;
public:
	void get_data()
	{
		cout << "Enter the Sides: ";
		cin >> X >> Y;
	}
	virtual void display_area()
	{
		cout << "Displaying Area from Base Class!";
	}
};
class Triangle : public Shape
{
	int Area;
public:
	void display_area()
	{
		cout << "Displaying Area from Derived Class Triangle!";
		Area = 0.5 * X * Y;
		cout << "\nArea of Triangle is: " << Area << endl;
	}
};
class Rectangle : public Shape
{
	int Area;
public:
	void display_area()
	{
		cout << "Displaying Area from Derived Class Rectangle!";
		Area = X * Y;
		cout << "\nArea of Rectangle is: " << Area;
	}
};
int main()
{
	Shape *ptr;
	Triangle t;
	ptr = &t;
	ptr -> get_data();
	ptr -> display_area();
	Rectangle r;
	ptr  = &r;
	ptr -> get_data();
	ptr -> display_area();
	return 0;
}
