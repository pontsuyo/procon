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

int a[15][15];
int ans[15][15];

int main(){
    int n, m;
    cin >> n >>  m;

    rep(i, m){
        int ai, bi;
        cin >> ai >> bi;
        ai--;
        bi--;
        a[ai][bi] = 1;
        a[bi][ai] = 1;
    }

    rep(i, n) rep(j, n) rep(k, n){
        ans[i][j] += a[i][k] * a[k][j];
    }

    rep(i, n){
        int aa = 0;
        rep(j, n){
            if(j!=i && a[i][j]==0 && ans[i][j]>0) aa++;
        }
        cout << aa << endl;
    }
    return 0;
}