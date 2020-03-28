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

int h, w;
char c[505][505];

bool done[505][505];

void dfs(int x, int y){
    done[x][y] = true;
    if(c[x][y]=='g'){
        return;
    }else{
        int di[4] = {-1, 0, 1, 0};
        int dj[4] = {0, -1, 0, 1};
        rep(i, 4){
            int nx = x+di[i];
            int ny = y+dj[i];
            if(nx>=0 && nx <h && ny>=0 && ny<w && c[nx][ny]!='#' && !done[nx][ny]){
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    cin >> h >> w;
    int si, sj, gi, gj;
    rep(i, h) rep(j, w){
        cin >> c[i][j];
        if(c[i][j]=='s') si=i, sj=j;
        if(c[i][j]=='g') gi=i, gj=j;
    }

    dfs(si, sj);
    if(done[gi][gj]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}