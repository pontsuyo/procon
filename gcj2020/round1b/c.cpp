#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18


void dfs(int ri, int si){
    if(ri==1) return;
    rep(i, si-1){
        printf("%d %d\n", (si-1)*ri-i, ri-1);
    }
    dfs(ri-1, si);
}

int main(){
    int t;
    cin >> t;
    rep(ti, t){
        int r, s;
        cin >> r >> s;
        printf("Case #%d: %d\n", ti+1, (s-1)*(r-1));
        dfs(r, s);
    }
    return 0;
}