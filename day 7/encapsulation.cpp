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
    void setbalance(int balance)
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
int getbalance()
{
    return balance;
}
};
int main()
{
    int n;
    cin>>n;

    Atm a;
    a.setbalance(n);
    cout<<"current balance:"<<a.getbalance()<<endl;
    a.withdraw(500);    
    a.getbalance();
    cout<<"current balance:"<<a.getbalance()<<endl;
    return 0;
}