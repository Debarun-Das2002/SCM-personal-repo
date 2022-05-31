#include <iostream>
#include<conio.h>
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void main()
{
    int a=25, b=50;
    clrscr();
    swap (a, b);
    cout<<"the value of x:"<<x;
    cout<<"the value of y:"<<y;
    getch();
}