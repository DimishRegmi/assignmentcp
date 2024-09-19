// Write a C++ program to implement a class called Employee that has private
// member variables for name, employee ID, and salary. Include member functions to
// calculate and set salary based on employee performance
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string n, int id, double s)
    {
        name = n;
        employeeID = id;
        salary = s;
    }

    // Getter for name
    string getName()
    {
        return name;
    }

    // Getter for employee ID
    int getEmployeeID()
    {
        return employeeID;
    }

    // Getter for salary
    double getSalary()
    {
        return salary;
    }

    // Function to calculate salary based on performance
    void calculateSalary(double performance)
    {
        if (performance >= 90)
        {
            salary *= 1.1; // 10% increase for excellent performance
        }
        else if (performance >= 80)
        {
            salary *= 1.05; // 5% increase for good performance
        }
        else if (performance >= 70)
        {
            salary *= 1.0; // No change for average performance
        }
        else
        {
            salary *= 0.9; // 10% decrease for poor performance
        }
    }

    // Function to set salary
    void setSalary(double s)
    {
        salary = s;
    }

    // Function to display employee information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    // Create an Employee object
    Employee emp("John Doe", 1234, 50000.0);

    // Display initial employee information
    cout << "Initial Employee Information:" << endl;
    emp.displayInfo();

    // Calculate salary based on performance
    double performance = 92.0; // Excellent performance
    emp.calculateSalary(performance);

    // Display updated employee information
    cout << "\nUpdated Employee Information:" << endl;
    emp.displayInfo();

    return 0;
}