#include<iostream>
using namespace std;
class Student
{    public:
    int roll;
    string name;
    void display()
    {
        cout<<roll<<" "<<name;
        
    }
};
int main()
{
    Student s1;
    s1.roll=101; 
    s1.display();               
    s1.name="John";
    return 0;
}   