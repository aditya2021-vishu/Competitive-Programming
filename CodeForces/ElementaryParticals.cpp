// https://codeforces.com/contest/1625/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int> mp;
        int inDmatchOne = 0;
        int MatchIndexTwo = (n-1);
        bool flag = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i] = x;
            auto it = mp.find(x);
            if(it == mp.end())
                mp[x] = i;
            else {
                if(((i-(*it).second)<=(MatchIndexTwo - inDmatchOne))&&((i-(*it).second)>=1)){
                    inDmatchOne = (*it).second;
                    MatchIndexTwo = i;
                }
                mp.erase(it);
                mp[x] = i;
                flag = true;   
            }
        }
        if(flag == false)
            cout<<-1<<"\n";
        else
        cout<<(inDmatchOne+(n - MatchIndexTwo))<<"\n";
    }
}
