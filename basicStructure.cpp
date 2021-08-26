#include<iostream>
using namespace std;

struct stud{
    int roll;
    string name;
};
struct num{
    int roll;
    string name;
};


int main(){
    num a;
    a.roll=8; //one way to allot
    a.name="XYZ";
    cout<<a.roll<<" "<<a.name<<"\n"; 
    stud s={10,"ABC"}; //another way to allot
    cout<<s.roll<<" "<<s.name;

    return 0;
}