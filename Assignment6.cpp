#include <iostream>
using namespace std;


// Custom Exception Class
class Exception {};


class Student {
    double totalMarks;
    int subjects;


public:
    // Function to read values
    void setvalue() {
        cout << "Enter the total marks obtained by the student: ";
        cin >> totalMarks;
        cout << "Enter the number of subjects: ";
        cin >> subjects;
    }


    // Function to display average marks with exception handling
    void showvalue() {
        try {
            if (subjects == 0) {
                throw Exception();  // Throw exception if subjects = 0
            }
            double average = totalMarks / subjects;
            cout << "The average marks of the student are: " << average << endl;
        } 
        catch (Exception e) {
            cout << "Error: The student has not registered any subjects." << endl;
        }
    }
};


int main() {
    Student s1, s2;


    cout << "\n-: Student 1 :-" << endl;
    s1.setvalue();
    s1.showvalue();


    cout << "\n-: Student 2 :-" << endl;
    s2.setvalue();
    s2.showvalue();


    return 0;
}
