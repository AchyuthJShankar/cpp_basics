#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b, c;
    b=a++; //postfix -> b=a then a=a+1;
    cout<<a<<" "<<b<<"\n";
    c=++a; //prefix -> a=a+1 then c=a
    cout<<a<<" "<<c;
    return 0;

}