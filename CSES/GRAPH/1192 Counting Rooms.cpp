#include<bits/stdc++.h>
using namespace std;
int vis[1001][1001];
char a[1001][1001];
int n, m;
bool isValid(int x, int y)
{
   
    if(x < 1 || y < 1 || x > n || y > m) return false;
    if(a[x][y] == '#') return false;
    if(vis[x][y] == 1) return false;
    return true;
}
 
void dfs(int x, int y)
{
    vis[x][y] = 1;
    if(isValid(x,y+1)) dfs(x,y+1);
    if(isValid(x,y-1)) dfs(x,y-1);
    if(isValid(x-1,y)) dfs(x-1,y);
    if(isValid(x+1,y)) dfs(x+1,y);
}
 
int main()
{
    int ans= 0;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if( a[i][j] == '.' && vis[i][j] == 0 ) {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
