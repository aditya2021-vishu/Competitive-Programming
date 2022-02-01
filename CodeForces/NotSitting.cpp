// https://codeforces.com/contest/1627/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n+1][m+1];
        int mxsz = m*n;
        vector<int> ansvec;
        int initial = m+n-2;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(m%2 == 0){
                    if(2*j <= m){
                        arr[i][j] = initial;
                        initial--;
                    }
                    else{
                        initial++;
                        arr[i][j] = initial;
                    }
                }
                else{
                    if(2*j < m){
                        arr[i][j] = initial;
                        initial--;
                    }
                    else{
                        arr[i][j] = initial;
                        if(j<m){
                            initial++;    
                        }
                    }
                }
            }
            if(n%2 == 0){
                if(2*i < n){
                    initial--;
                }
                else if(2*i>n){
                    initial++;
                }
            }
            else{
                if(2*i < n){
                    initial--;
                }
                else if(2*i >= n){
                    initial++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                ansvec.push_back(arr[i][j]);
            }
        }
        sort(ansvec.begin(),ansvec.end());
        for(auto &val : ansvec){
            cout<<val<<" ";
        }
        cout<<"\n";
    }
}
