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

int main(){
    int n, q;
    cin >> n >> q;
    string s;
    bool f[n][n] = {};

    rep(i, q){
        int tmp;
        cin >> tmp;
        if(tmp==1){
            int a, b;
            cin >> a >> b;
            f[--a][--b] = true;

        }else if(tmp==2){
            int a;
            cin >> a;
            --a;
            rep(j, n){
                if(f[j][a] && j!=a){
                    f[a][j] = true;
                }
            }
        }else{
            int a;
            cin >> a;
            --a;
            bool tmpf[n][n] = {};

            rep(j, n){
                if(f[a][j]){
                    rep(k, n){
                        if(f[j][k] && f[a][j] && k!=a){
                            // printf("%d %d %d\n", j, k, a);
                            // if(k==3){
                            //     printf("%d %d %d\n", j, k, a);
                            // }
                            tmpf[a][k] = true;
                        }
                    }
                }
            }
            rep(j, n){
                rep(k, n){
                    if(tmpf[j][k]){
                        f[j][k] = true;
                    }
                }
            }
        }

    //         rep(i, n){
    //     rep(j, n){
    //         if(f[i][j]){
    //             cout << "Y";
    //         }else{
    //             cout << "N";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    }

    rep(i, n){
        rep(j, n){
            if(f[i][j]){
                cout << "Y";
            }else{
                cout << "N";
            }
        }
        cout << endl;
    }
    return 0;
}