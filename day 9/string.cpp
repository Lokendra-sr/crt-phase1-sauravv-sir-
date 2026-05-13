#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="Hello";
    string str2="World";
    cout<<str1<<" "<<str2<<endl;
    cout<<"Length of str1: "<<str1.length()<<endl;
    cout<<"append: "<<str1.append("jecrc")<<endl;
    cout<<"concatenation: "<<str1+str2<<endl;
    str1.push_back('s');
    cout<<"after push_back: "<<str1<<endl;
    swap(str1,str2);
    cout<<"after swap: "<<str1<<" "<<str2<<endl;
    string substr=str


}