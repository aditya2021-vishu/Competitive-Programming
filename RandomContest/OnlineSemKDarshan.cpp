// https://codeforces.com/group/hUywLYmr80/contest/363696/problem/C


#include<bits/stdc++.h>
using namespace std;
long long c,a,p;

long long summatio = 0;

bool finding(){
    long long init_a = a;
    vector<long long> num;
    while(init_a){
        long long did = init_a%10;
        init_a = init_a/10;
        num.push_back(did);
    }
    long long mult = num.size();
    long long rec = mult;
    long long nxt = 1;
    while(rec--){
        nxt = nxt*10;
    }
    long long d = nxt - a;
    long long b = (c/(p*mult));
    if(b>d){
        summatio = summatio + d;
        a = nxt;
        c = c - (d)*p*mult;
        return false;
    }
    else{
        summatio = summatio + b;
        return true;
    }
}

int main(){
    cin>>c>>a>>p;
    bool flag = false;
    while(flag == false){
        bool ans = finding();
        flag = ans;
    }
    cout<<summatio<<"\n";
}