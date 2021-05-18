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
void solve()
{
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            if( j <= i) dp[i] = (dp[i]+dp[i-j]) % mod;
        }
    }
    cout << dp[n] << endl;
}
 
int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();
 
    return 0;
}
