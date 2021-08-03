#include<iostream>
using namespace std;
int main(){
    int a=10, b=3;
    double c= double(a)/b; //Explicit Conversion in C style
    double d=static_cast<double>(a)/b; //In Cpp style
    cout<<c<<endl<<d;
    return 0;
}
