#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>0){
        if(a%2==0){ //NESTED LOOP
            cout<<"It is Positive even";
        }
        else
            cout<<"It's Positive Odd";
    }
    else if(a<0){
        if(abs(a)%2==0){
            cout<<"It is Negative even";
        }
        else
            cout<<"It's Negative Odd";
    }
    else
        cout<<"It's ZERO";

    return 0;
}