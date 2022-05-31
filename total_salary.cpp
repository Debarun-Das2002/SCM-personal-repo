#include <iostream>
using namespace std;
class employee{
    private:
    int salary,hra=0;

    public:
    
    employee_A(){
        salary=0;
      
    }
    employee_B(int a){
        salary=a;
      
    }
    employee_C(int b, int c){
        salary=b;
        hra=c;
      
    }

    void display(){
        cout<<"salary = "<<salary<<". hra = "<<hra<<endl;
    }


};


int main(){
    employee a,b(5000),c(7000,3000);

    cout<<"employee A ";
    a.display();
    cout<<"employee B ";
    b.display();
    cout<<"employee C             ";
    c.display();




    return 0;
}