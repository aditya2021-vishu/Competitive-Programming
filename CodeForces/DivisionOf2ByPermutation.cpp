// https://codeforces.com/contest/1624/problem/C

#include<bits/stdc++.h>
using namespace std;

bool comparator(int a,int b){
    return a>b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int hash[n];
        vector<int> st;
        vector<int> nst;
        int answr = 0;
        bool flag = false;
        for(int i=1;i<=n;i++){
            hash[i] = 0;
        }
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            arr[i] = x;
            if(x<=n){
                if(hash[x]==0){
                    hash[x]++;
                }
                else{
                    st.push_back(x);
                }   
            }
            else{
                st.push_back(x);
            }
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0){
                nst.push_back(i);
            }
        }
        sort(st.begin() , st.end() , comparator);
        int counter = 0;
        for(auto &val : st){
            //cout<<val<<"\n";
            //int c = val;
            while(val){
                val = val/2;
                int x = val;
                if(val == 0) continue;
                vector<int> ::iterator thita;
                thita = std::find(nst.begin(),nst.end(),x);
                //auto it = nst.find(x);
                if(thita!=nst.end()){
                    //cout<<c<<" "<<(*thita)<<"hu"<<"\n";
                    nst.erase(thita);
                    counter++;
                    break;
                }
            }
        }
        if(nst.size() == 0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}

