// https://codeforces.com/contest/1624/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        char arr[a];
        int countOfTwo = 0;
        int OnesCount = 0;
        vector<char> ch;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            vector<char> ::iterator thita;
            thita = std::find(ch.begin(),ch.end(),arr[i]);
            if(thita != ch.end()){
                countOfTwo++;
                ch.erase(thita);
            }
            else{
                ch.push_back(arr[i]);    
            }
        }
        OnesCount = ch.size();
        int pairused = countOfTwo/b;
        int pairlft = 2*(countOfTwo%b);
        //if(pairlft >= b){
            OnesCount = OnesCount + pairlft;    
        //}
        //cout<<OnesCount<<" "<<countOfTwo;
        if(OnesCount>=b){
            cout<<((2*(countOfTwo/b)) + 1)<<"\n";
        }
        else{
            cout<<(2*(countOfTwo/b))<<"\n";
        }
    }
}

