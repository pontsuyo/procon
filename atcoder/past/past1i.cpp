#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e16

int main(){
    int n, m;
    cin >> n >> m;

    string s[m];
    ll c[m];
    rep(i, m){
        cin >> s[i] >> c[i];
    }

    set<int> idset;
    rep(i, n){
        ll tmp = INF;
        int id = -1;
        rep(j, m){
            if(s[j][i]=='Y' && tmp>c[j]){
                tmp = c[j];
                id = j;
            }
        }

        idset.insert(id);
    }

    vector<int> ids;
    for(auto id: idset){
        ids.emplace_back(id);
    }

    int nn = ids.size();

    ll ans = LLINF;
    rep(i, 1<<nn){
        int ii = i;
        int val[nn];
        rep(j, nn){
            val[j] = ii%2;
            ii /=2;
        }

        bool cau[n];
        rep(i, n){
            cau[i] = false;
        }


        rep(j, nn){
            if(val[j]==0) continue;
            rep(k, n){
                if(s[ids[j]][k]=='Y'){
                    cau[k] = true;
                }
            }
        }

        bool flag = true;
        rep(j, n){
            if(!cau[j]) flag = false;
        }

        if(!flag) continue;

        ll score = 0;
        rep(j, nn){
            if(val[j]>0){
                score += c[ids[j]];
            }
        }
        ans = min(ans, score);
    }

    cout << ans << endl;
    return 0;
}