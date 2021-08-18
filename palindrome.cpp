#include<bits/stdc++.h>
using namespace std;
/*
CODE IS CASE SENSITIVE
*/
int main(){
    string s;
    cout<<"ENTER THE WORD"<<"\n";
    cin>>s;
    int a=0;
    int b=s.length()-1;
    while(a<b){
        if(s[a]!=s[b]){
            cout<<"NOT PALINDROME";
            return 0;
        }
        else{
            a++;
            b--;
        }

    }
    cout<<"ITS PALINDROME";
    return 0;
}