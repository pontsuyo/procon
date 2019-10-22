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
    int r,c,k, n;
    cin >> r >> c >> k >> n; 

    int sr[r] = {}, sc[c]={};
    int rr[n], cc[n];
    rep(i, n){
        cin >> rr[i] >> cc[i];
        sr[rr[i]-1]++;
        sc[cc[i]-1]++;
    }

    map<int, int> mr, mc;
    rep(i, r){
        mr[sr[i]]++;
    }

    rep(i, c){
        mc[sc[i]]++;
    }
    
    ll ans = 0;
    for (int i = 0; i <= k; i++) {
        ans += mr[i] * mc[k-i];
    }

    rep(i, n){
        if(sr[rr[i]-1] + sc[cc[i]-1] ==k) ans--;
        if(sr[rr[i]-1] + sc[cc[i]-1] ==k+1) ans++;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}