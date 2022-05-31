#include <iostream>
using namespace std;

int main()
{
    int n, largest;
    int num[5];

    cout << "Enter 5 Array Elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    largest = num[0];
    for (int i = 1; i < 5; i++)
    {
        if (largest < num[i])
            largest = num[i];
    }
    cout << "Largest element in array is: " << largest;
    return 0;
}