// Write a C++ program to implement a class called Student that has private member variables for name, class,
// roll number, and marks. Include member functions to calculate the grade based on the marks
//  and display the student's information.
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    string className;
    int rollNumber;
    double marks;

public:
    // Constructor
    Student(string n, string c, int r, double m)
    {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
    }

    // Getter for name
    string getName()
    {
        return name;
    }

    // Getter for class
    string getClassName()
    {
        return className;
    }

    // Getter for roll number
    int getRollNumber()
    {
        return rollNumber;
    }

    // Getter for marks
    double getMarks()
    {
        return marks;
    }

    // Function to calculate grade based on marks
    string calculateGrade()
    {
        if (marks >= 90)
        {
            return "A";
        }
        else if (marks >= 80)
        {
            return "B";
        }
        else if (marks >= 70)
        {
            return "C";
        }
        else if (marks >= 60)
        {
            return "D";
        }
        else
        {
            return "F";
        }
    }

    // Function to display student information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main()
{
    // Create a Student object
    Student student("John Doe", "XII", 123, 85.0);

    // Display student information
    cout << "Student Information:" << endl;
    student.displayInfo();

    return 0;
}