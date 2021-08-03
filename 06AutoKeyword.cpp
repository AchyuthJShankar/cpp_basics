#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    auto a=1;
    auto b=4.51;
    cout<<a<<" "<<b<<endl;
    cout<<typeid(a).name()<<endl<<typeid(b).name()<<endl;
    return 0;
}