#include<iostream>
using namespace std; 
int main (){

    //Boolean
        bool a=true;
        cout<<a<<"\n"; //1
        cout<<std::boolalpha;
        cout<<a<<"\n"; //true
        cout<<std::noboolalpha;
        cout<<a<<"\n"; //1

    //INTEGER
        int b=45;
        cout<<b<<"\n"; //45
        cout<<std::hex; //to print in hexadecimal
        cout<<b<<"\n"; //2d
        cout<<std::showbase; //shows basetype
        cout<<b<<"\n"; //0x2d
        cout<<std::uppercase; //makes alphabet caps
        cout<<b<<"\n"; //0X2D
        cout<<std::oct;
        cout<<b<<"\n"; //055 (oct)
        cout<<std::dec;
        cout<<b<<"\n"; //45
    return 0;
}