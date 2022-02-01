// https://codeforces.com/contest/1539/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    long long groups = 1;
    vector<long long> waitList;
    sort(vec.begin(),vec.end());
    for(int i=0;i<(n-1);i++){
        if((vec[i+1]-vec[i] > x)){
            if((vec[i] + 2*x)<vec[i+1]){
                if(k<1){
                    groups++;
                }
                else{
                    waitList.push_back(vec[i+1] - vec[i]);
                    //cout<<"hi"<<"\n";
                }
            }
            else if(k>0){
                k--;
            }
            else{
                groups++;
            }
        }
    }
    //cout<<k<<"kval"<<"\n";
    sort(waitList.begin(),waitList.end());
    for(auto &val :waitList){
        //cout<<val<<"\n"<<"\n";
        long long mult = val/x - 1;
        long long divid = val%x;
        long long req;
        if(divid == 0){
            req = mult;
        }
        else{
            req = mult+1;
        }
        if(k >= req){
            //cout<<"hi";
            k = k - req;
        }
        else{
            groups++;
        }
    }
    cout<<groups<<"\n";
}
