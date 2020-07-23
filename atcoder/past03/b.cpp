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

int solved[55];
set<int> mon[100005];

int main(){
    int n, m, q;
    cin >> n >> m >> q;
    rep(qi, q){
        int qn;
        cin >> qn;
        if(qn==1){
            int ni;
            cin >> ni;
            ni--;
            int ans = 0;
            for (auto si : mon[ni]){
                ans += (n-solved[si]);
            }
            cout << ans << endl;
            
        }else{
            int ni, mi;
            cin >> ni >> mi;
            mi--;
            ni--;
            solved[mi]++;
            mon[ni].insert(mi);
        }


        // rep(i, m){
        //     cout <<"s "<< solved[i] << " ";
        // }                
        // cout << endl;

    }
    // printf("%d\n", N);
    return 0;
}