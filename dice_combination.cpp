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
    int n;
    cin >> n;
    int mod = 1e9 + 7;
    vector<int> dp(n + 1);
    int dices = 6;
    dp[0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        for (int dice = 1; dice <= dices; dice++)
        {
            if (dice > i)
                continue;
            dp[i] = (dp[i] + dp[i - dice]) % mod;
        }
    }

    cout << dp[n] << endl;
}