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
    int n, k, s;
    cin >> n >> k >> s;
    if(s!=1000000000){
        rep(i, k){
            cout << s << " ";
        }
        rep(i, n-k){
            cout << 1000000000 << " ";
        }
    }else{
        rep(i, k){
            cout << s << " ";
        }
        rep(i, n-k){
            cout << 1 << " ";
        }
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}