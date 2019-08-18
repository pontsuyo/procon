#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;

    char C[r][c];
    rep(i, r){
        string s;
        cin >> s;
        rep(j, c){
            C[i][j] = s[j];
        }
    }

    // int d[r][c] = {INF};
    int d[r][c];
    rep(i, r){
        rep(j, c){
            d[i][j] = INF;
        }
    }
    d[sy][sx] = 0;

    queue<P> q;

    q.push(P(sy, sx));
    int dy[4] = {-1, 0, +1, 0};
    int dx[4] = {0, -1, 0, +1};
    
    while(!q.empty()){
        P p = q.front();
        q.pop();

        if(p.first==gy && p.second==gx) break;

        for (int i = 0; i < 4; i++) {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if (ny >=0 && ny < r && nx >= 0 && nx < c && C[ny][nx]=='.' && d[ny][nx]==INF) {
                d[ny][nx] = d[p.first][p.second] + 1;
                q.push(P(ny, nx));
            }
        }
    }

    cout << d[gy][gx] << endl;
    // printf("%d\n", N);
    return 0;
}