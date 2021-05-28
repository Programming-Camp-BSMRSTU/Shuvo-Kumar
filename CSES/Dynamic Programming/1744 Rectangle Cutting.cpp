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
int dp[505][505];
int dfs(int x, int y)
{
   if(x == y) return 0;
   if(dp[x][y] != -1) return dp[x][y];
   int res = INT_MAX;
   for(int i = 1; i < x; i++) res = min(res, 1 + dfs(i,y) + dfs(x-i,y));
   for(int i = 1; i < y; i++) res = min(res, 1 + dfs(x,i) + dfs(x,y-i));
   return dp[x][y] = res;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    memset(dp,-1,sizeof(dp));
    cout << dfs(n,m) << endl;
}
 
int main()
{
    IOS;
    int t = 1;
   // cin >> t;
    while(t--) solve();
 
    return 0;
}
