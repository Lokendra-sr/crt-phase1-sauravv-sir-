#include<iostream>
using namespace std;

class Player{
    public:
    string name;
    int age;
    void setName(string name)
    {
        this->name=name;
    }
};

class Cricketer:public Player{
    public:
    int runs;
    void setruns(int runs)
    {
        runs=runs;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"runs: "<<runs<<endl;
    }

};
int main()
{
    int runs;
    cin>>runs;
    Cricketer c;
    c.setName("virat");
    c.age=35;
    c.setruns(runs);
    c.display();
    return 0;
}

