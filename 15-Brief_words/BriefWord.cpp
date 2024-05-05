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

string BriefWord(string n, int k)
{
    stack<char> s;
    int len = n.length();
    for (int i = 0; i < len; i++)
    {
        if (s.empty())
        {
            s.push(n[i]);
        }
        else if (s.top() > n[i])
        {
            while (!s.empty() && s.top() > n[i] && k > 0)
            {
                s.pop();
                k--;
            }
            s.push(n[i]);
        }
        else if (s.top() <= n[i])
            s.push(n[i]);
    }
    while (k > 0)
    {
        s.pop();
        k--;
    }
    string a;
    while (!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    reverse(a.begin(), a.end());
    if (a == "")
        return "0";
    int x = 0;
    while (a[x] == '0')
        x++;
    if (x > 0)
        return a.substr(x, a.size() - x) != "" ? a.substr(x, a.size() - x) : "0";
    return a;
}
void cases()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << BriefWord(s, k) << endl;
}