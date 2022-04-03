#include <iostream>
#include<cmath>
using namespace std;

class Area
{
    public:

    int setDim(int length, int breadth)
    {
        a=length;
        b=breadth;
     
    cout<<"Enter length and breadth of rectangle :";
    cin>>a>>b;

    return a, b;
    }

    int getArea()
    {
        cout<<length*breadth;
    }
};
int main()
{
    Area a;
    a.setDim;
    cout<<a.getArea;
}