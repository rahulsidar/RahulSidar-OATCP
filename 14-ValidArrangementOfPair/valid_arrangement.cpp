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
    cin >> t;
    while (t--)
    {
        cases();
    }
    return 0;
}

void euler(unordered_map<int, stack<int>> &adj, vector<vector<int>> &ans, int curr)
{
    auto &stk = adj[curr];
    while (!stk.empty())
    {
        int nei = stk.top();
        stk.pop();
        euler(adj, ans, nei);
        // postorder
        ans.push_back({curr, nei});
    }
}
vector<vector<int>> validArrangement(vector<vector<int>> &pairs)
{
    int m = pairs.size();
    // Eulerian Path
    unordered_map<int, stack<int>> adj;
    unordered_map<int, int> in;
    unordered_map<int, int> out;
    // reserve spaces for unordered_map may help in runtime.
    adj.reserve(m);
    in.reserve(m);
    out.reserve(m);
    for (int i = 0; i < m; i++)
    {
        int u = pairs[i][0], v = pairs[i][1];
        in[v]++;
        out[u]++;
        adj[u].push(v);
    }
    // find the starting node
    int start = -1;
    for (auto &p : adj)
    {
        int i = p.first;
        if (out[i] - in[i] == 1)
            start = i;
    }
    if (start == -1)
    {
        // Eulerian Circuit -> start at any node
        start = adj.begin()->first;
    }
    vector<vector<int>> ans;
    euler(adj, ans, start);
    reverse(ans.begin(), ans.end());
    return ans;
}

void cases()
{
    ll n; cin >> n;
    vector<vector<int>> pairs;

    for(int i = 0; i < n; i++)
    {
        vector<int> temp;
        int x,y; cin >> x>>y;
        temp.push_back(x);
        temp.push_back(y);
        pairs.push_back(temp);
    }

    auto ans = validArrangement(pairs);

    if(ans.size() != n)
    {
        cout << "No Valid Arrangement possible" << endl;
        return;
    }

    for(int i = 0; i < ans.size(); i++)
    {
        int x = ans[i].size();
        for(int j = 0; j < x; j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    cout << endl;

}