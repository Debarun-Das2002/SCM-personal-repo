#include <iostream>
using namespace std;
// Student type class
class Student
{
    string name;
public:
    // Parameterized constructor
    Student(string s)
    {
        name = s;
    }
    // Default constructor
    Student()
    {
        name = "Unknown";
    }
    // member function
    void print_name()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("Debarun");
    Student s2;
    s1.print_name();
    s2.print_name();
    return 0;
}