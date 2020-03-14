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
    int s[m];
    char c[m];
    rep(i, m){
        cin >> s[i] >> c[i];
        --s[i];
    }
    if(n>=2){
        rep(i, m){
            if(s[i]==0 && c[i]=='0'){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < (int)pow(10, n); i++){
        bool ok = true;
        string tmp = to_string(i);
        rep(j, m){
            if(tmp[s[j]] != c[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << i <<  endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}