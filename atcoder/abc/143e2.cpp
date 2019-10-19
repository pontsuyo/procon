#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define MAX_V 310

ll d[MAX_V][MAX_V];
int V, E, L;

void warshall_floyd() {
    for(int k=0; k<V; k++)
        for(int i=0; i<V; i++)
            for(int j=0; j<V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}


int main(){
    cin >> V >> E >> L;
    rep(i, V){
        rep(j, V){
            d[i][j] = INF;
        }
    }
    rep(i, E){
        int a, b, c;
        cin >> a >> b >> c;
        --a;
        --b;
        d[a][b] = c;
        d[b][a] = c;
    }

    warshall_floyd();

    // rep(i, V){
    //     rep(j, V){
    //         printf("%d %d %d\n", i, j, d[i][j]);
    //     }
    //     cout << endl;
    // }


    rep(i, V){
        rep(j, V){
            if(d[i][j] <= L){
                d[i][j] = 1;
            }else{
                d[i][j] = INF;
            }
        }
    }

    warshall_floyd();

    // rep(i, V){
    //     rep(j, V){
    //         printf("%d %d %d\n", i, j, d[i][j]);
    //     }
    // }

    int q;
    cin >> q;
    rep(i, q){
        int s, t;
        cin >> s >> t;
        --s;
        --t;
        if(d[s][t]==INF) {
            cout << -1 << endl;
        } else{
            cout << d[s][t]-1 << endl;
        }
    }
    return 0;
}