#include<iostream>
using namespace std;
class Atm
{
    private:
    int balance;

    public:
    Atm(int balance)
    {
        this->balance=balance;

    }
void withdraw(int amount)
{
    if(amount>balance)
    {
        cout<<"insufficient balance"<<endl;
    }
    else
    {
        balance=balance-amount;
        cout<<"withdrawn amount: "<<amount<<endl;
    }
}
void Showbalance ()
{
    cout<<"current balance: "<<balance<<endl;   
}
};
int main()
{
    Atm a(5000);
    a.withdraw(500);
    a.Showbalance ();
    return 0;
}