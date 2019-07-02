#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

const int INF = 100100100;

int main(){
    int R, C;
    cin >> R >> C;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    --sy;
    --sx;
    --gy;
    --gx;
    char c[R][C];
    int d[R][C];
    rep(i, R){
        rep(j, C){
            cin >> c[i][j];
        }
    }

    int vx[4] = {0, 1, 0, -1};
    int vy[4] = {1, 0, -1, 0};
    queue<P> que;
    
    rep(i, R){
        rep(j, C){
            d[i][j] = INF;
        }
    }

    que.push(P(sy, sx));
    d[sy][sx] = 0;

    while(que.size()){
        P p = que.front(); que.pop();
        if(p.first == gy && p.second == gx) break;

        rep(i, 4){
            int ny = p.first + vy[i];
            int nx = p.second + vx[i];

            if(0 <= ny && ny < R && 0 <= nx && nx < C && c[ny][nx] != '#' && d[ny][nx] == INF){
                que.push(P(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }

    printf("%d\n", d[gy][gx]);
    return 0;
}