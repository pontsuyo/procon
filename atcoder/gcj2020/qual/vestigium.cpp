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
    int t;
    cin >> t;
    rep(i, t){
        int n;
        cin >> n;
        int a[n][n];
        int k = 0;
        int r=0, c=0;
        set<int> rs[n], cs[n];

        rep(i, n) rep(j, n){
            int m;
            cin >> m;
            a[i][j] = m;
            if(i==j) k += m;
            rs[i].insert(m);
            cs[j].insert(m);
        } 
        
        
        rep(i, n){
            if(rs[i].size()!=n) r++;
            if(cs[i].size()!=n) c++;   
        }
        
        printf("Case #%d: %d %d %d\n", i+1, k, r, c);
    }
    // printf("%d\n", N);
    return 0;
}