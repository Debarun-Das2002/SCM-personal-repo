#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        int k=i;
        while (j<=i){
            cout<<k;
            j=j+1;
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }
}