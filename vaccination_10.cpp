#include <iostream>
using namespace std;

int main()
{
int age;
cout<<"enter your age";
cin >> age;
if (age<18){
    cout<< "Minor not eligible"<<endl;
}
else if (age<60){
    cout<< "eligible vaccination with highest priority"<<endl;
}
else if  (age>18 && age<60){
    cout<< "eligible for vaccination with least priority"<<endl;
}
}
