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

int r, c;
char ch[55][55];
int d[55][55];
int sy, sx, gy, gx;

void bfs(){
    queue<P> q;
    q.push(P(sy, sx));
    d[sy][sx] = 0;

    while(!q.empty()){
        P p = q.front();
        q.pop();
        
        int py = p.first;
        int px = p.second;
        if(py==gy && px==gx){
            return;        
        }
        
        int dy[4] = {-1, 0, 1, 0};
        int dx[4] = {0, -1, 0, 1};
        
        rep(i, 4){
            int ny = py + dy[i];
            int nx = px + dx[i];

            if(d[ny][nx] > d[py][px] + 1 && ch[ny][nx]!='#'){
                q.push(P(ny, nx));
                d[ny][nx] = d[py][px] + 1;
            }
        }
    }
}

int main(){
    cin >> r >> c;
    cin >> sy >> sx >> gy >> gx;
    sy--, sx--, gy--, gx--;
    rep(i, r) rep(j, c) cin >> ch[i][j], d[i][j]=INF;

    bfs();

    cout << d[gy][gx] << endl;


    // printf("%d\n", N);
    return 0;
}