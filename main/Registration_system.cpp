// https://codeforces.com/contest/4/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<string,int> m;
    while(t--){
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1){
            cout<<"OK"<<"\n";
        }
        else{
            int f = m[s]-1;
            cout<<s<<f<<"\n";
        }
    }
    return 0;
}