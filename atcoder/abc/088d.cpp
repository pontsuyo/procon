#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int h, w;
    cin >> h >> w;

    char s[h][w];
    int ans = 0;
    rep(i, h){
        rep(j, w){
            char c; cin >> c;
            s[i][j] = c;
            if(c=='.') ans++;
        }
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};

    queue<P> q;
    q.push(P(0, 0));

    int d[h][w];
    rep(i, h) rep(j, w) d[i][j] = INF;
    d[0][0] = 0;
    while(!q.empty()){
        P p = q.front(); q.pop();
        int x = p.first;
        int y = p.second;
        
        rep(i, 4){
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(nx>=0 && nx<h && ny>=0 && ny<w && s[nx][ny]=='.' && d[nx][ny]==INF){
                d[nx][ny] = d[x][y] + 1;
                q.push(P(nx, ny));
            }
        }
        if(d[h-1][w-1]!=INF) break;
    }

    if(d[h-1][w-1]==INF){
        cout << -1 << endl;    
    }else{
        cout << ans - d[h-1][w-1] -1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}