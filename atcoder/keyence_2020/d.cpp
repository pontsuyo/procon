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
        int ii = iii;
        rep(j, n){
            col[j] = ii%2;
            ii /= 2;
        }

        int tt = 0;
        bool ng = false;
        rep(i, n){
            if(tt==1 && col[i]==0){
                ng = true;
                break;
            }
            tt += col[i];
            tt %= 2;
        }
        if(tt==1 || ng) continue;

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
        
        sort(podd.begin(), podd.end());
        sort(peven.begin(), peven.end());

        // printf("%d p odd\n", iii);
        // for (auto a : podd){
        //     printf("%d\n", a.first);
        // }
        // printf("%d p even\n", iii);
        // for (auto a : peven){
        //     printf("%d\n", a.first);
        // }
        


        vector<int> ids;
        rep(i, n-1){
            int ii = i/2;
            int ij = i%2; 
            if(ij==0){
                if(podd[ii].first > peven[ii].first) ng = true;
            }else{
                if(peven[ii].first > podd[ii+1].first) ng = true;
            }
        }
        if(ng) continue;

        // printf("%d p odd\n", iii);
        // for (auto a : podd){
        //     printf("%d\n", a.first);
        // }
        // printf("%d p even\n", iii);
        // for (auto a : peven){
        //     printf("%d\n", a.first);
        // }
        // printf("%d %d\n", podd.size(), peven.size());


        rep(i, peven.size()){
            ids.emplace_back(podd[i].second);
            ids.emplace_back(peven[i].second);
        }
        if(n%2==1){
            ids.emplace_back(podd[(n+1)/2-1].second);
        }

        // rep(i, n){
        //     printf("%d\n", ids[i]);
        // }

        int cnt = 0;
        rep(i, n){
            rep(j, n){
                if(i<j){
                    if(ids[i] > ids[j]) cnt++;
                }
            }
        }
        // printf("a %d\n", cnt);
        chmin(ans, cnt);
    }

    if(ans==INF){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

    // printf("%d\n", N);
    return 0;
}