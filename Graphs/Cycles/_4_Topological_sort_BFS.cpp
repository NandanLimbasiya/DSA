#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    vector<int> topoSort(int V, vector<int> adj[]){
      vector<int> indegree(V, 0);
      vector<int> ans;

      for (int i = 0; i < V; i++){
        for(auto it:adj[i]){
          indegree[it]++;
        }
      }

      queue<int> q;

      for (int i = 0; i < V; i++){
        if(indegree[i] == 0)
          q.push(i);
      }

      while(!q.empty()){
        int node = q.front();
        ans.push_back(node);
        q.pop();

        for(auto it:adj[node]){
          indegree[it]--;
          if(indegree[it] == 0)
            q.push(it);
        }
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

  for (auto it:ans){
    cout << it << " ";
  }
  return 0;
}