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
    int n;
    cin >> n;
    int x[n], l[n];
    rep(i, n){
        cin >> x[i] >> l[i];
    }

    P p[n];
    rep(i, n){
        int li = x[i]-l[i];
        int ri = x[i]+l[i];
        p[i] = make_pair(ri, li);
    }

    sort(p, p+n);

    int tmpl = -INF, tmpr=-INF;
    int cnt = 0;
    rep(i, n){
        if(p[i].second >= tmpr){
            cnt++;
            tmpl = p[i].second;
            tmpr = p[i].first;
        }
    }


    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}