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
bitset<3001>B[3001] ;
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
   int n,i,j,c=0 ; cin>>n ;
    
   for(i=0;i<n;i++)
   {
     cin>>B[i] ;
   }

   long long ans = 0 ;
   for(int i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
       int x = (B[i] & B[j]).count();

       ans += (((x)*(x-1))) ;
    }
   }
   cout<<ans / 2<<"\n" ;
}