#include<iostream>
using namespace std;

struct abc{
    int x;
    int y;
};

int main(){
    abc A={10,20};
    abc *ptr = &A; // abc is datatype
    cout<<ptr->x<<"\n";  //GIVES THE VALUE OF x, ptr(pointer) points to x
    ptr->x=30;
    cout<<A.x; //gives the value of x, from struct

    return 0;
}