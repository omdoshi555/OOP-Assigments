#include <iostream>
using namespace std;
class Complex
{
	public:
	float real, imag;
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(float a, float b)
	{
		real = a;
		imag = b;
	}
   friend istream & operator>>(istream &in, Complex &obj);
   friend ostream & operator<<(ostream &out, Complex &obj);
	//Addition Operator
	Complex operator +(Complex c)
	{
		Complex  temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag ;
		return temp;
	}
	//Multiplication Operator
	friend Complex operator*(Complex other1, Complex other2);
//	Displaying Result
//	void Display()
//	{
//		cout << real << " + j" << imag << "\n";
//	}
};
istream & operator>>(istream &in, Complex &obj)
{
	cout << "Enter Real number : ";
	in >> obj.real;
	cout << "Enter Imaginary Number : ";
	in >> obj.imag;
	return in;
}
ostream & operator<<(ostream &out, Complex &obj)
{
	out << obj.real << " + j" << obj.imag << "\n";
	return out;
}
//Defining Friend function for Multiplication
Complex operator *(Complex other1, Complex other2)
	{
		Complex result;
		result.real = (other1.real * other2.real) - (other1.imag * other2.imag);
		result.imag = (other1.real * other2.imag) + (other1.imag * other2.real);
		return result;
	}
int main()
{
//	float a, b, c, d;
//	//Accept Numbers
//	cout << "Enter Real and Imaginary Part of 1st Complex Number : ";
//	cin >> a >> b;
//	cout << "Enter Real and Imaginary Part of 2nd Complex Number : ";
//	cin >> c >> d;
//	Complex C1, C2, C3, C4;
//	C1 = Complex(a, b);
//	C2 = Complex(c, d);
	Complex C1, C2, C3, C4;
	cin >> C1;
	cin >> C2;
	C3 = C1 + C2;
	C4 = C1 * C2;
	//Print Numbers
	cout << "C1 = "  ;
	cout << C1;
	cout << "C2 = " ;
	cout << C2;
	//Print Sum
	cout << "Sum of Complex Numbers is : C3 = ";
	cout << C3;
	//Print Multiplication
	cout << "Multiplication of Complex Numbers is : C4 = ";
	cout << C4;
	return 0;
}
