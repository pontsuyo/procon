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
    int n, d, k;
    cin >> n >> d >> k;

    int l[d], r[d];
    rep(i, d){
        cin >> l[i] >> r[i];
    }

    rep(i, k){
        int s, t;
        cin >> s >> t;
        rep(j, d){
            if(l[j]<=s && s <= r[j]){
                if(l[j] <= t && t <= r[j]){
                    cout << j+1 << endl;
                    break;
                }else if(t<l[j]){
                    s = l[j];
                }else{
                    s = r[j];
                }
            }
        }
    }
    return 0;
}