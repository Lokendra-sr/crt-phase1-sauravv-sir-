#include<iostream>
using namespace std;

namespace virat 
{
void show()
{
    cout<<"he is in rcb"<<endl;

}
namespace rohit {
    void show()
    {
        cout<<"he is in mi"<<endl;

    }
}
int main()
{
    virat::show();
    rohit::show();
    return 0;

}

}