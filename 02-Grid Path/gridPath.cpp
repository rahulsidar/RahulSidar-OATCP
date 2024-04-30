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
void cases()
{
    ll n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    int mod = 1e9 + 7;

    vector<int> dp(n);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '*')
            {
                dp[j] = 0;
                continue;
            }

            if (j > 0)
            {
                dp[j] = (dp[j] + dp[j - 1]) % mod;
            }
        }
    }

    cout << dp[n - 1] << endl;
}
