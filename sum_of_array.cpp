#include <iostream>
using namespace std;
int main(){
int sum = 0,i;
    int arr[5];
    cout<<"Enter 5 array elements: ";

    for (  i = 0; i<5 ;i++){
        cin>>arr[i];
        }
    for (i=0;i<5;i++){
        sum += arr[i];
    }
    
    float avg = sum/5;
    cout<<"The sum of the elements is: "<<sum <<endl;
    cout<<"The Average is: "<< avg;
}