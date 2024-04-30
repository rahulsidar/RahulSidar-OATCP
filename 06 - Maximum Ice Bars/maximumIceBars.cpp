#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IMAX INT32_MAX
#define IMIN INT32_MIN
#define endl '\n'
#define all(v) v.begin(),v.end()
#define loop(n) for(int i = 0; i < n; i++)
#define vll vector<ll>
#define  pr pair<ll,ll>
#define vpr vector<par<int,int>>
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

int maxIceCream(vector<int> &costs, int coins)
{
    int ans = 0;
    sort(costs.begin(), costs.end());
    for (int i = 0; i < costs.size(); i++)
    {
        if (costs[i] > coins)
        {
            return ans;
        }
        else
        {
            ans++;
            coins -= costs[i];
        }
    }

    return ans;
};

void cases()
{
    int n , coins; cin >> n >> coins;
    vector<int> costs;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        costs.push_back(x);
    }

    int ans = maxIceCream(costs,coins);
    cout  << ans << endl;
       
}

