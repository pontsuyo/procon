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
    int n, m;
    cin >> n >> m;
    int g;
    ll l = 1;
    ll a[n];
    ll ma = 1;
    rep(i, n){
        cin >> a[i];
        l = l/__gcd(l, a[i])*a[i];

        if(l>m){
            cout << 0 << endl;
            return 0;
        }

        chmax(ma, a[i]);
    }

    bool ok = true;
    int mmm = INF;
    // printf("%d %d\n", l, l/ma);
    rep(i, l/ma+1){
        ok = true;
        int tmp = i*ma + ma/2;
        rep(j, n){
            if((tmp*2)%a[j] != 0 || tmp % a[j]==0){
                ok = false;
                break;
            }
        }
        if(ok){
            mmm = tmp;
            break;
        }
        // printf("%d %d \n", mmm, i);
    }
    // printf("%d\n", mmm);
    if(mmm==INF){
        cout << 0 << endl;
    }else{
        cout << (m-mmm)/l + 1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}