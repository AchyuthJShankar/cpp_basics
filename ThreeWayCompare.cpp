/* 
WORKS ONLY ON C++20 VERSION
*/

#include<iostream>
using namespace std;
int main(){
    int a=10, b=20;
    auto c = a<=>b; //aDDEd ON CPP20 VERSION
    if (c>0)
        cout<<"b is more";
    else if(c<0)
        cout<<"a is more";
    else 
        cout<<"a=b";
    return 0;
}