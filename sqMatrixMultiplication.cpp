#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"SIZE"<<"\n";
    cin>>n;

    vector<vector<float>> a1(n,vector<float>(n,0));
    vector<vector<float>> a2(n,vector<float>(n,0));
    vector<vector<float>> b(n,vector<float>(n,0));
    cout<<"first matrix"<<"\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            float m;
            
            cin>>m;
            a1[i][j]=m;

        }
    }
    cout<<"second matrix"<<"\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            float m;
            
            cin>>m;
            a2[i][j]=m;
            
        }
    }
    cout<<"A: "<<"\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            cout<<a1[i][j]<<" ";
        }
    cout<<"\n";
    }
    cout<<"B: "<<"\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            cout<<a2[i][j]<<" ";
        }
    cout<<"\n";
    }
    cout<<"AxB: "<<"\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            b[i][j]=0;
            for(int k=0; k<n; k++){
                b[i][j]+=(a1[i][k]*a2[k][i]);
            }
        }
    }
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}