#include <iostream>
using namespace std;

int main()
{
  int a=10,b=30,c=30;

  if (a>b && a>c)
  {
    cout<<"Largest no. is: "<<a<<endl;
  }

  else if (b>a && b>c)
  {
    cout<<"Largest no. is: "<<b<<endl;
  }

  else if (c>a && c>b)
  {
    cout<<"Largest no. is: "<<c<<endl;
  }

  else
    cout<<"None";
  
    return 0;
}
