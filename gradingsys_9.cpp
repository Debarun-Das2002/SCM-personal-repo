#include<iostream>

using namespace std;

int main(){

int score;
cout<< "Enter your score: "<<endl;
cin>>score;

if (score<25){
    cout<< "F"<<endl;
}
else if (score>=25 || score<=45){
    cout<< "E"<<endl;
}
else if  (score >=45 || score<=50){
    cout<< "D"<<endl;
}

else if (score >=50 || score<=60){
    cout<< "C"<<endl;
}

else if  (score >=60 || score<=80){
    cout<< "B"<<endl;
}

else if(score>80 ){
    cout<< "A"<<endl;
}

return 0;
}