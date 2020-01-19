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
    int n;
    cin >> n;
    int a[n], b[n];
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
    }

    int ans = INF;
    int col[n];
    rep(iii, 1<<n){
        rep(j, n) col[j] = (iii>>j) & 1;

        vector<P> podd, peven;
        rep(i, n){
            if(i%2==0){
                if(col[i]==0){
                    podd.emplace_back(make_pair(a[i], i));
                }else{
                    peven.emplace_back(make_pair(b[i], i));
                }
            }else{
                if(col[i]==0){
                    peven.emplace_back(make_pair(a[i], i));
                }else{
                    podd.emplace_back(make_pair(b[i], i));
                }
            }
        }
        if(peven.size()!= n/2) continue;
        
        sort(podd.begin(), podd.end());
        sort(peven.begin(), peven.end());

        vector<P> p;
        int ido = 0, ide = 0;
        rep(i, n){
            if(i%2==0){
                p.push_back(podd[ido]);
                ido++;
            }else{
                p.push_back(peven[ide]);
                ide++;
            }
        }

        bool ok = true;
        rep(i, n-1){
            if(p[i].first > p[i+1].first) ok = false;
        }
        if(!ok) continue;

        int cnt = 0;
        rep(i, n){
            rep(j, n){
                if(i<j){
                    if(p[i].second > p[j].second) cnt++;
                }
            }
        }
        chmin(ans, cnt);
    }

    if(ans==INF){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}