// https://codeforces.com/contest/1625/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        int hash[b];
        for(int i=0;i<b;i++){
            hash[i]=0;
        }
        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            arr[i] = x;
            for(int j=0;j<b;j++){
                if((x&(1<<j))!=0){
                    hash[j]++;
                }
            }
        }
        int ans = 0;
        int multiplier = 1;
        for(int i=0;i<b;i++){
            if(2*hash[i] > a){
                ans = ans + multiplier;
            }
            else{
                ans = ans;
            }
            multiplier = multiplier*2;
        }
        cout<<ans<<"\n";
    }
}
