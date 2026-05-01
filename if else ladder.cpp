#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"enter the age :";
    cin>>age;

    if(age>100){
        cout<<"eligible to vote";
    }
    else if(17<age>99){
        cout<<"eligible to vote";
    }
    else if(0<age<18){
        cout<<"not eligible to vote";
    }
    if(age<0){
        cout<<"invalid age";
       
    }
    return 0;
}
