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

int minPatches(vector<int> &nums, int n)
{
    int count = 0;
    long reach = 0;
    int i = 0;
    while (reach < n)
    {
        if (i >= nums.size())
        {
            reach += reach + 1;
            count++;
        }
        else if (i < nums.size() && nums[i] <= (reach + 1))
        {
            reach += nums[i];
            i++;
        }
        else
        {
            reach += reach + 1;
            count++;
        }
    }

    return count;
}
void cases()
{
    ll n; cin >> n;
    vector<int> nums = {1,3};
    int ans = minPatches(nums,n);
    cout << ans << endl;

}