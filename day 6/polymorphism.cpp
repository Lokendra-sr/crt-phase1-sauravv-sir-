  #include<iostream>
using namespace std;
class Player{
    public:
    virtual void show()
    {
        cout<<"i am a player"<<endl;
    }   
};
class Cricketer:public Player{
    public:
   void show()
    {
       cout<<"i am a cricketer"<<endl;
    }
};



int main()
{
    Cricketer c;
    c.show();
    return 0;
}   