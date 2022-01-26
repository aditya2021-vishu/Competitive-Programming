// https://codeforces.com/contest/1608/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int prev = 1;
        for(int i=1;i<=n;i++){
            arr[i] = 1;
            if(arr[i]%prev && prev!=1){
                arr[i] = prev+1;
            }
            else{
                arr[i] = arr[i]+2;
            }
            prev = arr[i];
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}
