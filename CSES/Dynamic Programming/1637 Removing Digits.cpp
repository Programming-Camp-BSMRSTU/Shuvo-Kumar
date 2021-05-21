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
    int n;
    cin >> n;
    int cnt = 0;
    while(n)
    {
        cnt++;
        int x = n;
        int d = 0;
        while(x) d = max(d,x%10), x /= 10;
        n -= d;
    }
    cout << cnt << endl;
}

int main()
{
    IOS;
    int t = 1;
   /// cin >> t;
    while(t--) solve();

    return 0;
}
