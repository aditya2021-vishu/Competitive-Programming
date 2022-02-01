// https://codeforces.com/contest/1622/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int arr[n];
        int ans[n];
        multimap<pair<int,int>,int> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>s;
        for(int i=0;i<n;i++){
            int a = arr[i];
            int b = (int)s[i];
            mp.insert({{b,a},i});
        }
        int counter = 1;
        for(auto &val : mp){
            int a = val.second;
            ans[a] = counter;
            counter++;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
