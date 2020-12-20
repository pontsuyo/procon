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

bool has7[100005];

int main(){
    int n;
    cin >> n;

    int ans = 0;
    repr(i, 1, n){
        bool ok = true;
        int ii = i;
        while(ii>0){
            int tmp = ii%8;
            if(tmp==7){
                ok = false;
            }
            ii = ii/8;
        }

        ii = i;
        while(ii>0){
            int tmp = ii%10;
            if(tmp==7){
                ok = false;
            }
            ii = ii/10;
        }

        if(ok) ans++;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}