#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}

void primeFact(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}

int main(){
    int a;
    cout<<"ENTER"<<"\n";
    cin>>a;
    primeFact(a);
    return 0;
}