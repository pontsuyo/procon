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

int a[50][50];
int d[50][50];
int h, w;
int ans[50][50];

void bfs(int si, int sj){

    rep(i, 50) rep(j, 50) d[i][j] = INF;
    d[si][sj] = 0;

    using ti = tuple<int, int, int>;
    priority_queue<ti, vector<ti>, greater<ti>> qt;
    qt.push(make_tuple(0, si, sj));

    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};
    
    while(!qt.empty()){
        tuple<int, int, int> t;
        t = qt.top(); qt.pop();
        int dd = get<0>(t);
        int ci = get<1>(t);
        int cj = get<2>(t);

        rep(i, 4){
            int ni = ci + di[i];
            int nj = cj + dj[i];
            if(ni>=0 && ni<h && nj>=0 && nj<w && d[ni][nj]==INF){
                d[ni][nj] = dd + a[ni][nj];
                qt.push(make_tuple(d[ni][nj], ni, nj));
            }
        }
    }
}


int main(){
    cin >> h >> w;

    rep(i, h) rep(j, w) cin >> a[i][j];

    bfs(0, w-1);
    rep(i, h) rep(j, w) ans[i][j] += d[i][j];
    bfs(h-1, 0);
    rep(i, h) rep(j, w) ans[i][j] += d[i][j];
    bfs(h-1, w-1);
    rep(i, h) rep(j, w) ans[i][j] += d[i][j];

    int MIN = INF;
    rep(i, h) rep(j, w) chmin(MIN, ans[i][j]-2*a[i][j]);

    cout << MIN << endl;
    return 0;
}