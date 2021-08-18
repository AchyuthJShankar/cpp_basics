#include<bits/stdc++.h>
using namespace std;
void conv(int a){
    string s="";
    while(a>0){
        int n=a%2;
        s+=to_string(n);
        a/=2;        
        
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
int main(){
    
}