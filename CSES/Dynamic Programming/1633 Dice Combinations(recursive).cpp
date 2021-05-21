#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
const int mod=1e9+7;
const int N=1e6+9;
int dp[N];
int fun(int x)
{
    if(x == 0) return 1;
    if(dp[x] != -1) return dp[x];
    dp[x] = 0;
    for(int i = 1; i <= 6; i++)
    {
        if(x >= i) dp[x] = (dp[x] + fun(x-i)) % mod;
    }
    return dp[x];
}
void solve()
{
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    cout << fun(n) << endl;
}

int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
