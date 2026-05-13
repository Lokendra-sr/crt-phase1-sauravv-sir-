#include<iostream>
using namespace std;
class Area
{
    private:   
    int length;
    int breadth;
    public:
    void setsides(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
        cout<<"area of rectangle is "<<length*breadth<<endl;
    }
    friend void calculatearea(Area a); 
};
void calculatearea(Area b)
{
    cout<<"area of rectangle is "<<b.length*b.breadth<<endl;

}
int main()
{
    Area a;
    a.setsides(5,6);
    calculatearea(a);
    return 0;
}     
