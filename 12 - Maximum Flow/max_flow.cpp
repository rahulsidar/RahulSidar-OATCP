#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IMAX INT32_MAX
#define IMIN INT32_MIN
#define endl '\n'
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define vll vector<ll>
#define pr pair<ll, ll>
#define vpr vector<par<int, int>>
void cases();
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cases();
    }
    return 0;
}

int bfs(int source, int sink, vector<int> &parent, vector<vector<int>> &residualGraph)
{
    fill(parent.begin(), parent.end(), -1);
    int V = residualGraph.size();
    parent[source] = -2;
    queue<pair<int, int>> q;
    q.push({source, INT_MAX});

    while (!q.empty())
    {
        int u = q.front().first;
        int capacity = q.front().second;
        q.pop();
        for (int av = 0; av < V; av++)
        {
            if (u != av && parent[av] == -1 && residualGraph[u][av] != 0)
            {
                parent[av] = u;
                int min_cap = min(capacity, residualGraph[u][av]);
                if (av == sink)
                    return min_cap;
                q.push({av, min_cap});
            }
        }
    }
    return 0;
}

int ford_fulkerson(vector<vector<int>> &graph, int source, int sink)
{
    vector<int> parent(graph.size(), -1);
    vector<vector<int>> residualGraph = graph;
    int min_cap = 0, max_flow = 0;
    while (min_cap = bfs(source, sink, parent, residualGraph))
    {
        max_flow += min_cap;
        int u = sink;
        while (u != source)
        {
            int v = parent[u];
            residualGraph[u][v] += min_cap;
            residualGraph[v][u] -= min_cap;
            u = v;
        }
    }
    return max_flow;
}

void addEdge(vector<vector<int>> &graph,
             int u, int v, int w)
{
    graph[u][v] = w;
}
void cases()
{
    int V = 6;
    vector<vector<int>> graph(V, vector<int>(V, 0));

    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 3, 3);
    addEdge(graph, 1, 2, 4);
    addEdge(graph, 2, 3, 3);
    addEdge(graph, 2, 5, 2);
    addEdge(graph, 3, 4, 6);
    addEdge(graph, 4, 5, 6);

    cout << "Maximum Flow: " << ford_fulkerson(graph, 0, 5) << endl;
}