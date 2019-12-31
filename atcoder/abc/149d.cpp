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
    int n, k, r, s, p;
    string t;
    cin >> n >> k >> r >> s >> p;
    cin >> t;

    bool result[n];
    rep(i, t.size()){
        if(i>=k){
            if(t[i]==t[i-k]){
                if(result[i-k]){
                    result[i] = false;
                }else{
                    result[i] = true;
                }
            }else{
                result[i] = true;
            }
        }else{
            result[i] = true;
        }
    }

    int ans = 0;
    rep(i, n){
        if(result[i]){
            if(t[i]=='r'){
                ans += p;
            }else if(t[i]=='s'){
                ans += r;
            }else{
                ans += s;
            }
        }
        // printf("%d\n", ans);    
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}