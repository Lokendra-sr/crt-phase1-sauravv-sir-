#include<iostream>
using namespace std;
class area
{
    public:
    int lenght;
    int breath;
    int side;
    double radius;
    area(int lenght,int breath)
    {
        this->lenght=lenght;
        this->breath=breath;
        cout<<"area of rectangle is "<<lenght*breath<<endl; 
    }
area(int side)
    {
        this->side=side;
        cout<<"area of square is "<<side*side<<endl; 
    }
area(double radius)
    {
        this->radius=radius;
        cout<<"area of circle is "<<3.14*radius*radius<<endl;   

}   
};
int main()
{
    area a1(5,6);
    area a2(5);
    area a3(5.0);

    return 0;
}       
