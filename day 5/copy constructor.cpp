#include<iostream>
using namespace std;
class cricketers
{
    public:
    string name;
    int runs;
    cricketers(string name,int runs )
    {
        this->name=name;
        this->runs=runs;
    }
    cricketers(cricketers &c)
    {
        name=c.name;
        runs=c.runs;
    }
    void display()
    {
        cout<<name<<" "<<runs<<endl;
    }
};
int main()
{
    cricketers c1("virat",12000);
    cricketers c2=c1; //copy constructor is called
    c1.display();
    c2.display();
    return 0;       
}


