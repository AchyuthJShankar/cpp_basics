#include<iostream>
#include<iomanip> //to io manipulation
using namespace std; 
int main (){
    int a=25;
    cout<<a<<"\n";
    cout<<std::setw(5); //set width
    cout<<std::setfill('#'); //filling blank
    cout<<a<<"\n";
    cout<<std::setw(5);
    cout<<std::left;
    cout<<a;

    return 0;

}