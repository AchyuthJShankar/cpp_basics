#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"SIZE";
    cin>>n;
    vector <vector<int>> vec (n, vector<int>(n,0));
    vector <vector<int>> ans(n,vector<int> (n,0));
    cout<<"MATRIX";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int t;
            cin>>t;
            vec[i][j]=t;
        }        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ans[j][i]=vec[i][j];
            }
    }
    cout<<"TRANSPOSED: "<<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
        return 0;

}