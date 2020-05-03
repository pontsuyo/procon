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
#define LLINF (ll) 2e18

int ans;
int n, m, q;
int a[50], b[50], c[50], d[50];
int A[15];

void dfs(int vi, int len){
    // printf("%d %d\n", vi, len);
    if(len==n){
        int tmp = 0;
        rep(i, q){
            if(A[b[i]]-A[a[i]]==c[i]) tmp += d[i];
        }
        chmax(ans, tmp);
    }else{

        repr(i, vi, m){
            A[len+1] = i;
            dfs(i, len+1);
        }
    }
}


int main(){
    cin >> n >> m >> q;
    rep(i, q){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--;
        b[i]--;
    }

    // int AA[15];
    // printf("%d\n", N);
    dfs(1, -1);

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}