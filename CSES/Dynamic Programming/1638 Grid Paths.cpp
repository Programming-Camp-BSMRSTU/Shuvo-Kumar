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
    int n; cin >> n;
    string a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(a[0][0] == '*')
    {
        cout << 0 << endl; return;
    }
    ll dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == '*') continue;
            if(j > 0)
            {
                if(a[i][j-1] != '*') dp[i][j] = (dp[i][j-1] + dp[i][j]) % mod;
            }
            if(i > 0)
            {
               if(a[i-1][j] != '*')  dp[i][j] =( dp[i-1][j] + dp[i][j]) % mod;
            } 
           
        }
    }
    cout << dp[n-1][n-1] << endl;
}

int main()
{
    IOS;
    int t = 1;
   // cin >> t;
    while(t--) solve();

    return 0;
}
