#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, M;
    cin >> N >> M;

    bool adj[12][12] = {false};
    rep(i, M){
        int x, y;
        cin >> x >> y;
        adj[x-1][y-1] = true;
    }

    int ans = 0;
    for(int S = 1 << N; S>0; --S){
        int t = bitset<12>(S).count();
        if(t <= ans) continue;

        bool flag = true;
        rep(i, N) rep(j, i){
            if(S >> i  & S >> j & 1 && !adj[j][i]){
                flag = false;
            }
        }
        if(flag) ans = t;
    }
    cout << ans << endl;
    return 0;
}