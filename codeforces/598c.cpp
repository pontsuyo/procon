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
    int n, m, d;
    cin >> n >> m >> d;
    int c[m];
    rep(i, m) cin >> c[i];

    int ans[n];
    rep(i, n){
        ans[i] = 0;
    }

    int p = -1;
    rep(i, m){
        p += d;
        int l = p;
        p += c[i]-1;
        int r = p;
        for (int j = l; j <= r; j++)
        {
            ans[j] = i+1;
        }
        

    }

    if(p>=n-d){
        cout << "YES" << endl;
        rep(i, n){
            cout << ans[i];
            if(i!=n-1){
                cout << " ";
            }
        }
        cout << endl;
    }else{
        cout << "NO" << endl;
    }
    // printf("%d\n", N);
    return 0;
}