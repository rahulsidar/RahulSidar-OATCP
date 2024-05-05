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
    string s;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        cout << s[i] << s[i + 1] << " ";
    }
    for (int i = 0; i < 3; i++)
    {
        cout << s[i] << s[i + 1] << s[i + 2] << " ";
    }
    cout << endl;
}
