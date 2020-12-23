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

int main(){
    int n, m;
    cin >> n >> m;
    int a[m];
    rep(i, m) cin >> a[i];

    sort(a, a+m);    

    vector<int> v;

    int tmp = 0;
    rep(i, m){
        int t = a[i] -tmp -1;
        if(t!=0){
            v.emplace_back(t);
        }
        tmp = a[i];
    }
    if(n -tmp!=0) v.emplace_back(n -tmp);

    int k = INF;
    for (auto &&vi : v){
        chmin(k, vi);
    }

    int ans = 0;
    for (auto &&vi : v){
        ans += (vi-1)/k + 1;
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}