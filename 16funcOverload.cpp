#include<iostream>
using namespace std;
int abc(int a, int b){
    int x;
    x=a+b;
    return x;
}
int abc(int a, int b, int c){      //functionOverloading 
    int x;
    x=a+b+c;
    return x;
}
int main(){
    int m=10, n=15, o=20;
    cout<<abc(m,n)<<"\n";
    cout<<abc(m,n,o)<<"\n";
    return 0;
}