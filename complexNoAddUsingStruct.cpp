#include<iostream>
using namespace std;

struct addComp{
    float a,b;
};

int main(){
    addComp x,y;
    cout<<"ENTER FIRST REAL AND COMPLEX WITH SPACE OR ENTER"<<"\n";
    cin>>x.a>>x.b;
    cout<<x.a<<"+("<<x.b<<")i"<<"\n";

    cout<<"ENTER SECOND REAL AND COMPLEX WITH SPACE OR ENTER"<<"\n";
    cin>>y.a>>y.b;
    cout<<y.a<<"+("<<y.b<<")i"<<"\n";
    
    cout<<"OUTPUT: "<<"\n";
    
    cout<<x.a+y.a<<"+("<<x.b+y.b<<")i"<<"\n";
    return 0;

}