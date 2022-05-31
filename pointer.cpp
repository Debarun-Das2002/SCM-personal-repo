#include <bits/stdc++.h>
using namespace std;

void geeks(){
    int v=20;
    int *ptr; //pointer
    ptr=&v;

    cout<<"Value at v:"<<v<<endl;
    cout<<"Value at ptr:"<<ptr<<endl;
    cout<<"Value at *ptr:"<<*ptr<<endl;
}

int main(){
    geeks();
}