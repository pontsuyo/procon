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

void bfs(){
    int di[4] = {0, 1, 0, -1};
    int dj[4] = {-1, 0, 1, 0};
    
    queue<P> q;
    vector<P> pv[1000005];
    q.push(P(ch, cw));
    int dt = 0;

    while(q.size()>0){
        while(q.size()>0){
            P p = q.front(); q.pop();
            pv[dt].emplace_back(p);
            for (int i = 0; i < 4; i++){
                int ni = p.first + di[i];
                int nj = p.second + dj[i];
                if(ni>=0 && ni < h && nj>=0 && nj<w && maze[ni][nj]=='.' && d[ni][nj]==INF){
                    q.push(P(ni, nj));
                    pv[dt].emplace_back(P(ni, nj));
                    d[ni][nj] = dt;
                }
            }
        }

        // printf("%d ", dt);
        for (auto &&p : pv[dt]){
            rep(ii, 5) rep(jj, 5){
                int ni = p.first + ii-2;
                int nj = p.second + jj-2;

                if(ni>=0 && ni < h && nj>=0 && nj<w && maze[ni][nj]=='.' && d[ni][nj]==INF){
                    q.push(P(ni, nj));
                    pv[dt+1].emplace_back(P(ni, nj));
                    d[ni][nj] = dt+1;
                }
            }
        }
        dt++;
        // printf("%d ", dt);
    }
}


int main(){
    cin >> h >> w;
    cin >> ch >> cw >> dh >> dw;
    --ch;
    --cw;
    --dh;
    --dw;
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

    bfs();


    // rep(hi, h){
    //     rep(wi, w){
    //         printf("%d ", d[hi][wi]);
    //     }
    //     printf("\n");
    // }

    if(d[dh][dw]==INF){
        cout << -1 << endl;
    }else{
        cout << d[dh][dw] << endl;
    }
    return 0;
}
