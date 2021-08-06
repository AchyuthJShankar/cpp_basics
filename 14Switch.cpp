#include<iostream>
using namespace std;
int main(){
    char a;
    int x=0, y=0;
    cin>>a;
    switch (a){
        case 'L': x--;
            break;
        case 'R': x++;
            break;
        case 'U': y++;
            break;
        case 'D': y--;
            break;
        default: cout<<"INVALID";
        
        
    }
    cout<<x<<" "<<y;
    return 0;
}