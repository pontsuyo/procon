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
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    vector<int> diff;

    rep(i, n-1){
        diff.emplace_back(a[i+1]-a[i]);
    }

    ll cnt = 0;
    ll ans = n;
    rep(i, diff.size()){
        if(i==0){
            cnt = 1;
        }
        else if(diff[i] == diff[i-1]){
            cnt++;
        }
        else{
            ans += cnt * (cnt+1) / 2;
            cnt = 1;
        }
    }

    ans += cnt * (cnt+1) / 2;


    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}