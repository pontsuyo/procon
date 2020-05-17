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
    int n;
    ll k;
    cin >> n >> k;
    int a[n];
    rep(i, n){
        cin >> a[i];
        a[i]--;
    }

    int l[n];
    rep(i, n) l[i] = INF;

    int j = 0;
    ll cnt = 0;
    l[0] =  0;
    while(true){
        j = a[j];
        cnt++;
        if(l[j]!=INF){
            int u = cnt - l[j];
            rep(ui, (k-cnt)%u){
                j = a[j];
            }
            cout << ++j << endl;
            return 0;
        }

        l[j] = cnt;
        if(cnt==k){
            cout << ++j << endl;
            return 0;
        }
    }
    return 0;
}