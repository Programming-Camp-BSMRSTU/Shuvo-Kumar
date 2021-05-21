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
const int N=3e5+9;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll dp[x+1] = {0};
    dp[0] = 1;
    vector<ll>v;
    for(int i = 0; i < n; i++)
    {
        int num; cin >> num; v.pb(num);
    }
    for(auto c: v)
    {
        for(int i = 1; i <= x; i++)
        {
            if(c <= i) dp[i] = (dp[i] + dp[i-c]) % mod;
        }
    }
    cout << dp[x] << endl;
}

int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
