// Write a C++ program to create a class called Triangle that has private member
// variables for the lengths of its three sides. Implement member functions to
// determine if the triangle is equilateral, isosceles, or scalene
#include <iostream>
#include <string>

using namespace std;

class Triangle
{
private:
    double sideA;
    double sideB;
    double sideC;

public:
    // Constructor
    Triangle(double a, double b, double c)
    {
        sideA = a;
        sideB = b;
        sideC = c;
    }

    // Getter for side A
    double getSideA()
    {
        return sideA;
    }

    // Getter for side B
    double getSideB()
    {
        return sideB;
    }

    // Getter for side C
    double getSideC()
    {
        return sideC;
    }

    // Function to check if the triangle is valid
    bool isValid()
    {
        if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Function to determine the type of triangle
    string determineType()
    {
        if (!isValid())
        {
            return "Invalid triangle";
        }

        if (sideA == sideB && sideB == sideC)
        {
            return "Equilateral";
        }
        else if (sideA == sideB || sideB == sideC || sideA == sideC)
        {
            return "Isosceles";
        }
        else
        {
            return "Scalene";
        }
    }

    // Function to display triangle information
    void displayInfo()
    {
        cout << "Side A: " << sideA << endl;
        cout << "Side B: " << sideB << endl;
        cout << "Side C: " << sideC << endl;
        cout << "Type: " << determineType() << endl;
    }
};

int main()
{
    // Create a Triangle object
    Triangle triangle(5.0, 5.0, 5.0);

    // Display triangle information
    cout << "Triangle Information:" << endl;
    triangle.displayInfo();

    // Create another Triangle object
    Triangle triangle2(3.0, 4.0, 5.0);

    // Display triangle information
    cout << "\nTriangle Information:" << endl;
    triangle2.displayInfo();

    // Create another Triangle object
    Triangle triangle3(10.0, 2.0, 3.0);

    // Display triangle information
    cout << "\nTriangle Information:" << endl;
    triangle3.displayInfo();

    return 0;
}