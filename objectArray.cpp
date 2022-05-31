#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int age;
    string address;

    public:

    Student(){
        name="unknown";
        age=0;
        address="not available";
    }

    void setInfo(string name,int age){
        this->name=name;
        this->age=age;
    }

    void setInfo(string name,int age,string address){
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void display(){
        cout<<"Name :"<<name<<" ~ Age :"<<age<<" ~ Address :"<<address<<endl;
    }

};



int main(){
        Student s0,s1,s2,s3,s4,s5,s6,s7,s8,s9;
        
         s0.setInfo("debarun",19,"assam");
         s1.setInfo("abhay",19,"delhi");
         s2.setInfo("aditi",19,"orissa");
         s3.setInfo("bhagat",19,"chandigarh");
         s4.setInfo("raju",13,"bandbudh");
         s5.setInfo("Komi",13,"badlapur");
         s6.setInfo("buddhi",15,"dholakpur");
         s7.setInfo("kitakawa",14,"tokyo");
         s8.setInfo("Gojo",25,"tokyo");
         s9.setInfo("sasuke",25,"z-city");

        Student arr[10]={s0,s1,s2,s3,s4,s5,s6,s7,s8,s9};

        for(int i=0;i<10;i++){
            arr[i].display();
        }

    return 0;
}