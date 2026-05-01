#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b>c){
        std::cout << "a is the largest" <<a;
        
    }
    if(b>a && a>c){
        cout<<"b is the largest"<<b ;
    }
        else{
        cout<<"c is the largest"<<c;
    }
    return 0;
}