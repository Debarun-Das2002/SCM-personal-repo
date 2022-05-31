#include <iostream>
using namespace std;

class student
{
    public:
    int rollno;
    void func(){
        cout<<"This function declared inside the class"<<endl;
    }
    void func2();
};

void student::func2(){
    cout<<"This function declared outside the class ";
}

int main(){

    student abhay;
    abhay.rollno=38;
    cout<<"rollno of abhay is "<<abhay.rollno<<endl;
    abhay.func();
    abhay.func2();

    return 0;
}