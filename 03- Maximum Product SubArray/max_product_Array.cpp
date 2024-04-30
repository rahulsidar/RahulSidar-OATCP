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
ll mod = 1e9 + 7;
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
    vector<ll> nums;
    for (int i = 0; i <= n - 1; i++)
    {
        ll a;
        cin >> a;
        nums.push_back(a);
    }

    int maxi = INT_MIN;
    int prd = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        prd = prd % mod * nums[i] % mod;
        maxi = max(maxi, prd);
    }
    cout << maxi;
}