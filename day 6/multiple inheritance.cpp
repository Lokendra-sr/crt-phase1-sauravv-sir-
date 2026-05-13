#include<iostream>
using namespace std;

class Player{
    public:
    string name;
    void setName(string name)
    {
        this->name= name  ;
    }
};

class Cricketer{
    public:
    int runs;
    void setruns(int runs)
    {
    this->runs= runs ;
    }

};

class Indian: public Player, public Cricketer{
    public:
    string s;
    void setstate(string state)
    {
        s=state;
    }
    void display()
    {
        
         cout<<"name: "<<name<<endl;
        cout<<"runs: "<<runs<<endl;
        cout<<"state: "<<s<<endl;
    }
        
    };

int main()

{
    Indian A;
    A.setName("virat");
    A.setruns(12000);
    A.setstate("delhi");
    A.display();
    return 0;
}

