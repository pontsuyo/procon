#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int d[1005][1005];
char maze[1005][1005];

int h, w;
int ch, cw, dh, dw;

int main(){
    cin >> h >> w;
    cin >> ch >> cw >> dh >> dw;
    rep(i, h) {
        string s;
        cin >> s;
        rep(wi, w){
            maze[i][wi] = s[wi];
        }
    }

    rep(hi, h) rep(wi, w){
        d[hi][wi] = INF;
    }

    d[ch][cw] = 0;


    

    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}

void bfs(){
    queue <P> que;

    que.push(P(ch, cw));
    d[ch][cw]=0;

    while (que.size()){
        P p=que.front(); que.pop();
        if(p.first == dh && p.second== dw) break;

        int di[4] = {1, 0, -1, 0}, dj[4] = {0, 1, 0, -1};
        for(int i=0; i<4; i++){
            int ni = p.first + di[i], nj = p.second + dj[i];

            if(0 <= ni && ni < h && 0 <= nj && nj < w && maze[ni][nj] == '.' && d[ni][nj]==INF){
                que.push(P(ni, nj));
                chmin(d[p.first][p.second], d[ni][nj]);
            }
        }
    }
}
