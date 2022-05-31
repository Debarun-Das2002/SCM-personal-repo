#include<iostream>

using namespace std;

int main()
{
int totalexp, qty, price, discount;
cout<<"Enter quantity:";  //input value of quantity
cin>>qty;
cout<<"Enter price:";   // input price
cin>>price;
totalexp=qty*price;  // calculate total expenses
if(totalexp>1000) //condition to check total expenses is more than 1000
{
    discount=(totalexp*0.1); // 10% discount is applicable
totalexp=totalexp-discount;
}
cout<<"Total Expense is Rs. "<<totalexp;

return 0;

}