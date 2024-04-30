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

void cases()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> bitCount(32, 0); 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (v[i] & (1 << j))
            {
                bitCount[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        ans += bitCount[i] * (n - bitCount[i]);
    }

    cout << ans << endl;
}
