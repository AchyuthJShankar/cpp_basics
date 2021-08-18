#include<bits/stdc++.h>
using namespace std;
void conv(string s){
    int ans=0;
    int base=1;
    int size=s.length()-1;
    for(int i=size; i>=0; i--){
        ans+=((int)(s[i]-'0')*base);
        base*=2;
    }
    cout<<"DECIMAL IS "<<ans;
    
}
int main(){
    string num;
    cout<<"ENTER BINARY"<<"\n";
    cin>>num;
    conv(num);
    return 0;


}