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

int a[1000005];

int main(){
    int k;
    cin >> k;

    repr(i, 1, k){
        a[i] = (a[i-1]*10+7)%k;
        if(a[i]==0){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    // printf("%d\n", N);
    return 0;
}