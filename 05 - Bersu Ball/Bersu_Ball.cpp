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
int MOD = 1e9 + 7;
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
void cases()
{
    long int i, j, n, m, cnt, ans, sum, x;
    cin >> n;
    long int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    long int b[m];
    map<int, int> mp;
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    cnt = 0;
    sort(a, a + n);
    sort(b, b + m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (mp[b[j]] < 1)
                continue;
            if (abs(a[i] - b[j]) <= 1)
            {
                cnt++;
                mp[b[j]]--;
                break;
            }
        }
    }
    cout << cnt % MOD << endl;
}