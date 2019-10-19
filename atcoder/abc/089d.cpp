#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int h, w, d;
    cin >> h >> w >> d;

    vector<P> v(h*w);

    rep(i, h){
        rep(j, w){
            P p = P(i, j);
            int a; cin >> a;
            v[--a] = p;
        }
    }

    // 累積和 ll?
    ll s[h*w+5];
    
    for (int i = 0; i < d; i++){
        s[i] = 0;
        int x = v[i].first;
        int y = v[i].second;
        for (int j = i+d; j < h*w; j+=d) {
            int xx = v[j].first;
            int yy = v[j].second;

            s[j] = s[j-d] + abs(x-xx)+abs(y-yy);
            x = xx;
            y = yy;
        }
    }
    
    int q; cin >> q;
    rep(i, q){
        int l, r;
        cin >> l >> r;
        // printf("%d %d\n", s[r-1], s[l-1]);
        cout << s[--r] - s[--l] << endl;
    }
    return 0;
}