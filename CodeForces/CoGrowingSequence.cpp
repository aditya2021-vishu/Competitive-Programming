// https://codeforces.com/contest/1547/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> input(n);
        vector<int> answer;
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                answer.push_back(0);
                continue;
            }
            answer.push_back((~input[i])&(input[i-1]));
            input[i] = (~input[i])&(input[i-1])^input[i];
        }
        for(int i=0;i<n;i++){
            cout<<answer[i]<<" ";
        }
        cout<<"\n";
    }
}
