= m; j++)
        {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % mod;
        } 
    }
 
    int ans = 0;
    for(int i = 1; i <= m; i++) ans = (ans + dp[n][i]) % mod;
    cout << ans << endl;
}
 
int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();
 
    return 0;
}
