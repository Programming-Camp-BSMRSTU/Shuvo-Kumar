#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
const int mod=1e9+7, inf = 1e9;
const int N=1e6+9;
int dp[N];
int n, x;
vector<int>v;
int fun(int i)
{
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];
    dp[i] = inf;
    for(auto c: v)
    {
        if(c <= i) dp[i] = min(dp[i],fun(i-c)+1);
    }
    return dp[i];
}
void solve()
{
    cin >> n >> x;
    for(int i = 0; i < n; i++) 
    {
        int num; cin >> num; v.pb(num);
    }
    memset(dp,-1,sizeof(dp));
   int ans = fun(x);
   if(ans != inf) cout << ans << endl;
   else cout << -1 << endl;
}

int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
