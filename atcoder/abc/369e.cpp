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

ll d[405][405];

int main(){
    int n, m;
    cin >> n >> m;

    rep(i, 405) rep(j, 405) d[i][j] = LLINF;

    int u[m],v[m],t[m];

    rep(i, m){
        cin >> u[i] >> v[i] >> t[i];
        u[i]--;
        v[i]--;
    }

    rep(i, n) d[i][i] = 0;

    rep(i, m){
        d[u[i]][v[i]] = min(d[u[i]][v[i]], (ll) t[i]);
        d[v[i]][u[i]] = min(d[v[i]][u[i]], (ll) t[i]);
    }


    // warshall_floyd
    rep(k, n) rep(i, n) rep(j, n) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }

    int q; cin >> q;
    rep(qi, q){
        int k; cin >> k;
        vector<int> b(k);
        rep(ki, k){
            cin >> b[ki];
            b[ki]--;
        }

        ll ans = LLINF; 
        do {
            rep(pi, 1 << k){
                ll tmpans = 0;
                int pos = 0;
                
                rep(ri, k){
                    if(pi & 1 << ri){
                        tmpans += d[pos][u[b[ri]]];
                        pos = v[b[ri]];
                    }else{
                        tmpans += d[pos][v[b[ri]]];
                        pos = u[b[ri]];
                    }
                    tmpans += t[b[ri]];
                }
                tmpans += d[pos][n-1];
                // printf("%d\n", tmpans);

                chmin(ans, tmpans);
            }

        } while (next_permutation(b.begin(), b.end()));
        
        cout << ans << endl;
    }



    // printf("%d\n", N);
    return 0;
}