#include <iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter row";
    cin>>m;

    int n;
     cout<<"Enter column";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int l=arr[0][0];
    for(int x=0;x<m;x++){
        for(int y=0;y<n;y++){
            if(arr[x][y]>l){
                l=arr[x][y];
            }
        }
    }
    cout<<l;

    return 0;
}