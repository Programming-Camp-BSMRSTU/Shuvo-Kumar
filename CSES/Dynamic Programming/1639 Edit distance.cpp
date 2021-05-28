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
string s1, s2;
int dp[5005][5005];
int fun(int i, int j)
{
    if(i == n && j == m) return 0;
    if(i == n) return m - j;
    if(j == m) return n - i;
    if(dp[i][j] != -1) return dp[i][j];
    if(s1[i] == s2[j])
    {
         dp[i][j] = fun(i+1,j+1);
    }
    else 
    {
        int x = 1 + fun(i,j+1);
        int x2 = 1 + fun(i+1,j);
        int x3 = 1 + fun(i+1,j+1);
        dp[i][j] = min({x,x2,x3});
    }
    return dp[i][j];
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    cin >> s1 >> s2;
    n = s1.size(), m = s2.size();
    
    cout << fun(0,0) << endl;
}
 
int main()
{
    IOS;
    int t = 1;
   // cin >> t;
    while(t--) solve();
 
    return 0;
}
