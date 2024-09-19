Create a class named Student with data members name, roll and member function get and display output

#include <iostream>

#include <cstring>
    using namespace std;

class Student(

string name;

int roll;

public: 
void get()(

cout<<"Enter details:":
 cin>>name>>roll:
}
void display()
{

    cout << "Name: " << name << endl
         << "Roll: 
            "<<roll<<endl;
}
}
;
int main()

    Student *ptr;
ptr = new Student;

ptr->get();
ptr->display();

delete ptr;
return 0;
}