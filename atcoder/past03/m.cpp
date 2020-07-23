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

#define MAX_V 100005

int d[MAX_V][MAX_V];
int V;

void warshall_floyd() {
    for(int k=0; k<V; k++)
        for(int i=0; i<V; i++)
            for(int j=0; j<V; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
}


int main(){
    int m;
    cin >> V >> m;

    rep(i, )
    rep(i, m){
        int u, v;
        cin >> u >> v;
    }
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}