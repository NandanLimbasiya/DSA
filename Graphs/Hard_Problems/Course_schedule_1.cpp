#include <bits/stdc++.h>
using namespace std;

class Soluition
{

public:
  vector<int> topoSort(int N, vector<int> adj[])
  {
    vector<int> indegree(N, 0);
    for (int i = 0; i < N; i++)
    {
      for (auto it : adj[i])
      {
        indegree[it]++;
      }
    }

    vector<int> ans;
    queue<int> q;

    for (int i = 0; i < N; i++)
    {
      if (!indegree[i])
        q.push(i);
    }

    while (!q.empty())
    {
      int node = q.front();
      q.pop();
      ans.push_back(node);

      for (auto it : adj[node])
      {
        indegree[it]--;
        if (indegree[it] == 0)
          q.push(it);
      }
    }
    return ans;
  }

  bool canFinish(int N, vector<vector<int>> arr)
  {
    vector<int> adj[N];
    for (auto it : arr)
    {
      adj[it[1]].push_back(it[0]);
    }

    vector<int> ans = topoSort(N, adj);
    return (ans.size() == N);
  }
};

int main()
{
  int N = 4;
  vector<vector<int>> arr = {
      {1, 0},
      {2, 1},
      {3, 2}};

  Soluition sol;

  bool ans = sol.canFinish(N, arr);
  cout << ans;
  return 0;
}