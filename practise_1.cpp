#include <iostream>
#include <string>
using namespace std;
class student
{
    public:
        string name, address;
        double ph_no;
};

int main()
{
    student s;
    student j;
    s.name="Sam";
    s.ph_no=984831501;
    s.address="ASHOK NAGAR";
    j.name="John";
    j.ph_no=984831501;
    j.address="Jesus NAGAR";

    cout<<"Details of student 1 :\n name :"<<s.name<<s.ph_no<<s.address<<endl;
    cout<<"Details of student 2 :\n name :"<<j.name<<j.ph_no<<j.address;

}