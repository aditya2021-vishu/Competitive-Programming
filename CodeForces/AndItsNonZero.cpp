// https://codeforces.com/contest/1615/problem/B

#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+7;
int hashw[N][32];


void precompute(){
    for(int i=0;i<=0;i++){
        for(int j=0;j<32;j++){
            hashw[i][j] = 0;
        }
    }
    for(int i=1;i<N;i++){
        for(int j=0;j<32;j++){
            if((i&(1<<j))!=0){
                hashw[i][j]++;
            }
        }
    }
    for(int i=1;i<N;i++){
        for(int j=0;j<32;j++){
            hashw[i][j] = hashw[i][j] + hashw[i-1][j];
        }
    }
}


int main(){
    precompute();
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int diff = abs(b-a+1);
        int maxCountOne = 0;
        for(int j=0;j<32;j++){
            maxCountOne = max(maxCountOne,(hashw[b][j] - hashw[a-1][j]));
        }
        cout<<(diff - maxCountOne)<<"\n";
    }
}
