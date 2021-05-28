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
int n, m;
int dp[1005][100005];
int price[1005],page[1005];
void solve()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> price[i];
    for(int i = 1; i <= n; i++) cin >> page[i];
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            dp[i][j] = dp[i-1][j];
            if(price[i] <= j) dp[i][j] = max(dp[i][j],dp[i-1][j-price[i]]+page[i]);
        }
    }
    cout << dp[n][m] << endl;
 
}
 
int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();
 
    return 0;
}
