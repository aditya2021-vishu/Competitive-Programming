// https://codeforces.com/contest/1617/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int hash[n];
        multiset<int> st;
        multiset<int> nst;
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
                    st.insert(x);
                }   
            }
            else{
                st.insert(x);
            }
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0){
                nst.insert(i);
            }
        }
        while(st.size()){
            int from = *(st.begin());
            st.erase(st.begin());
        
            int to = *(nst.begin());  
            nst.erase(nst.begin());
            
            //cout<<to<<" "<<from<<" ";
            if(from%2 != 0){
                from = from+1;
            }
            if((to <= ((from/2) - 1)) && (from <= 2*n)) answr++;
            else if(from>2*n) answr++;
            else{
                flag = true;
                cout<<-1<<"\n";
                break;
            }
            //cout<<"\n";
        }
        if(flag){
            continue;
        }
        cout<<answr<<"\n";
    }
}

