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

ll llpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main(){
    ll n;
    cin >> n;

    ll beki3[38], beki5[26];
    beki3[0]=1;
    beki5[0]=1;
    
    for (int i = 1; i < 38; i++){
        beki3[i] = beki3[i-1]*3;
    }
    for (int i = 1; i < 26; i++){
        beki5[i] = beki5[i-1]*5;
    }


    for (int i = 1; i < 38; i++){
        for (int j = 1; j < 26; j++){
            if(n==beki3[i] + beki5[j]){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}