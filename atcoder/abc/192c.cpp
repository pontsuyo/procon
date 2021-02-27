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
    int n, k;
    cin >> n >> k;

    int nn = n;
    rep(i, k){
        vector<int> a;
        while(nn>0){
            a.emplace_back(nn%10);
            nn /= 10;
        }

        sort(a.begin(), a.end());

        ll ma=0, mi=0;
        rep(ai, a.size()){
            mi += a[ai];
            if(ai!=a.size()-1) mi *= 10;
        }
        rep(ai, a.size()){
            ma += a[a.size()-ai-1];
            if(ai!=a.size()-1) ma *= 10;
        }
        nn = ma-mi;
    }

    cout << nn << endl;
    // printf("%d\n", N);
    return 0;
}