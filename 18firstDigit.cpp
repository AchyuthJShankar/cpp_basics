#include<iostream>
using namespace std;
//First Digit of a number
int first(int a){
    if(a>10){
        a=a/10;
        first(a);
    }
    else{
        return a;
    }
}

int main(){
    int x;
    cout<<"ENTER"<<"\n";
    cin>>x;
    cout<<first(x);
    return 0;
}