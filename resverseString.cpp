#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    //b="";
    cout<<"ENTER ONE WORD"<<"\n";
    cin>>a;
    int l=a.length()-1;
    while(l>=0){
        b+=a[l];
        l--;
    }
    cout<<"REVERSED WORD"<<"\n";
    cout<<b;
    return 0;
}