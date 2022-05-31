#include <iostream>
using namespace std;

int main()
{
    int arr[5]={2,3,5,6,7};
    int sum;
    for (int i=0; i<5 ; i++){
        if (arr[i]%2 !=0)
        {
            cout<<arr[i]<<",";
            sum=sum+arr[i];
        }
        cout<<sum;
    }

    return 0;
}