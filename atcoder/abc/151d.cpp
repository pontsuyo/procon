#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18
#define MAX_H 20
#define MAX_W 20

char maze[MAX_H][MAX_W + 1];
int sx, sy;
int gx, gy;
int h, w;
int d[MAX_H][MAX_W];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs(){
    queue <P> que;
    for(int i=0; i<h; i++)
        for(int j=0; j<w;j++) d[i][j] = INF;

    que.push(P(sx, sy));
    d[sx][sy]=0;

    while (que.size()){
        P p=que.front(); que.pop();
        if(p.first == gx && p.second== gy) break;

        for(int i=0; i<4; i++){
            int nx = p.first + dx[i], ny = p.second + dy[i];

            if(0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != '#' && d[nx][ny]==INF){
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] +1;
            }
        }
    }
    return d[gx][gy];
}

int main(){
    cin >> h >> w;
    rep(i, h){
        rep(j, w){
            cin >> maze[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < h*w; i++) {
        for (int j = i+1; j < h*w; j++) {
            sx = i/w;
            sy = i%w;
            gx = j/w;
            gy = j%w;
            if(maze[sx][sy]=='#' || maze[gx][gy]=='#') continue;
            int tmp = bfs();
            if(tmp!=INF) chmax(ans, tmp);
        }
    }
        
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}