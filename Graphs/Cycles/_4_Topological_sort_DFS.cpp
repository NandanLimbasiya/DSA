#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    void dfs(int node, vector<int> adj[], vector<int> &vis, stack<int> &st){
      vis[node] = 1;

      for(auto it:adj[node]){
        if(vis[it] == 0)
          dfs(it, adj, vis, st);
      }
      st.push(node);
    }

    vector<int> topoSort(int V, vector<int> adj[]){
      vector<int> ans;
      vector<int> vis(V,0);
      stack<int> st;
      for (int i = 0; i < V; i++){
        if(!vis[i]){
          dfs(i, adj, vis, st);
        }
      }

      while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
      }

      return ans;
    }
};

int main()
{
  int V = 6;
    vector<int> adj[V] = {
         {}, 
         {}, 
         {3}, 
         {1}, 
         {0,1}, 
         {0,2}
    };

    Solution sol;

    vector<int> ans = sol.topoSort(V, adj);

    for (int i = 0; i < V; i++){
      cout << ans[i] << " ";
    }
    return 0;
}