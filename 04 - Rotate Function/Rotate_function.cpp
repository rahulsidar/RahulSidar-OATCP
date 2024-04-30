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

int maxRotateValue(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    vector<int> dp(n + 1);
    int total_sum = 0;
    int current_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        total_sum += nums[i];
        current_sum += i * nums[i];
    }
    dp[0] = current_sum;
    for (int i = 1; i < n; ++i)
    {
        dp[i] = dp[i - 1] + total_sum - n * nums[n - i];
    }
    int max_val = *max_element(dp.begin(), dp.end());
    return max_val;
}

void cases()
{
    ll n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    cout << maxRotateValue(nums) << endl;
}
