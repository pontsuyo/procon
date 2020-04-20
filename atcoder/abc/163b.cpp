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

int main(){
    int n, m;
    cin >> n >> m;
    int sum = 0;
    rep(i, m){
        int a;
        cin >> a;
        sum += a;
    }

    if(sum <= n){
        cout << n-sum << endl;
    }else{
        cout << -1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}