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

int t[1505][1505];
int v[1505][1505];

int main(){
    int h, w, n, m;
    cin >> h >> w >> n >> m;

    int a[n], b[n], c[m], d[m];

    rep(i, n){
        cin >> a[i] >> b[i];
        a[i]--, b[i]--;
        t[a[i]][b[i]] = 1;
    }

    rep(i, m){
        cin >> c[i] >> d[i];
        c[i]--, d[i]--;
        t[c[i]][d[i]] = 2;
    }

    rep(i, n){
        int ti = a[i];
        int tj = b[i];
        while(tj+1<w && t[ti][tj+1]!=2){
            if(t[ti][tj+1]==1) break;
            v[ti][tj+1] = 1;
            tj++;
        }

        ti = a[i];
        tj = b[i];
        while(tj-1>=0 && t[ti][tj-1]!=2){
            if(t[ti][tj-1]==1) break;
            v[ti][tj-1] = 1;
            tj--;
        }

        ti = a[i];
        tj = b[i];
        while(ti+1<h && t[ti+1][tj]!=2){
            if(t[ti+1][tj]==1) break;
            v[ti+1][tj] = 1;
            ti++;
        }

        ti = a[i];
        tj = b[i];
        while(ti-1>=0 && t[ti-1][tj]!=2){
            if(t[ti-1][tj]==1) break;
            v[ti-1][tj] = 1;
            ti--;
        }
    }

    int ans = 0;
    rep(i, h) rep(j, w) if(v[i][j]==1) ans++;

    cout << ans+n << endl;
    // printf("%d\n", N);
    return 0;
}