#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
	cout << " Enter your marks : ";
    cin >> num1;
    if(num1 > 9 and num1<10)
    {
        cout << " Grade A+\n\n";
    }
    else if(num1 >8  and num1<=9){
        cout << " Grade A\n\n";
    }
    else if(num1 > 7 and num1<=8){
        cout << " Grade B+\n\n";
    }
    else if(num1 > 6 and num1<=7){
        cout << " Grade B\n\n";
    }
    else if(num1 > 5 and num1<=6){
        cout << " Grade C\n\n";
    }
    else if(num1 > 4 and num1<=5){
        cout << " Grade D\n\n";
    }
    else if(num1 > 0 and num1<=4){
        cout << " Failed\n\n";
    }
    else
    {
        cout << "False input";
    }
    return 0;
}