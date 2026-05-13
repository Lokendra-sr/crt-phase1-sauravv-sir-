#include<iostream>
using namespace std;
class player{
    public:
    string name;
    void setname(string name)
    {
        this->name= name ;
    }
};
class Cricketer:public player{
    public:
    int runs;
    void setruns(int runs)
    {
        this->runs= runs ;

    }
    void show()
    {
        cout<<"name"<<name<<endl;
        cout<<"runs"<<runs<<endl;   }
};

class Fotballer:public player{
    public:
    int goals;
    void setgoals(int goals)
    {
        this->goals= goals ;

    }
    void show()
    {
        cout<<"name"<<name<<endl;
        cout<<"goals"<<goals<<endl; 
      }
};

int main()
{ 
    Cricketer c;
    c.setname(" virat");
    c.setruns( 100);
    c.show();

    Fotballer f;
    f.setname(" sunil");
    f.setgoals(5);
    f.show();

    return 0;
}