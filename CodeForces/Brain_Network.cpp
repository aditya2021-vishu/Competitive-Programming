// https://codeforces.com/contest/690/problem/C2
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int depth[N];


void dfs(int vertex,int parent = -1){
    
    //take action on vertex after entering the vertex(process 1)
    // --> if(vis[vertex]) return <--this process can be used i place of process 2.
    
    for(auto child : g[vertex]){
        
        if(child == parent) continue;
        // (<--) take action on childe before enering
        // the child node.(process 2)
        depth[child] = depth[vertex]+1;
        dfs(child,vertex);
        
        //take action on child after exiting 
        //the child node.(process 3)
        
    }
    
    //take action on vertex before exiting vertex(process 4)
}

int main(){
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    int mx_depth = -1;
    int mx_d_node;
    for(int i=1;i<=n;i++){
        if(mx_depth<depth[i]){
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }
    dfs(mx_d_node);
    mx_depth = -1;
    for(int i=1;i<=n;i++){
        if(mx_depth<depth[i]){
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }
    cout<<mx_depth<<"\n";
}
