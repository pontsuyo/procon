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

int main(){
    int n, m, t;
    cin >> n >> m >> t;
    int a[m], b[m];
    rep(i, m) cin >> a[i] >> b[i]; 

    int tt = 0;
    int nn = n;
    rep(i, m){
        nn-= (a[i]-tt);
        // printf("%d\n", n);
        if(nn <= 0){
            cout << "No" << endl;
            return 0;
        }
        nn += (b[i]-a[i]);
        chmin(nn, n);
        tt = b[i];
    }

    if(nn -(t-b[m-1]) <= 0){
        cout << "No" << endl;
            return 0;
    }
    cout << "Yes" << endl;
    return 0;
}