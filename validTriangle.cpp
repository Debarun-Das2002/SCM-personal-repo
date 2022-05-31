#include <iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"Enter the angles: ";
    cin>>a>>b>>c;
    if (a+b+c==180)
        cout <<"this is a valid triangle";
    else
        cout <<"this is a invalid triangle";
return 0;
}