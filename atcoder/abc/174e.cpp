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
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];

    int l = 0;
    int r = INF+5;
    while(l<r-1){
        int mid = (l+r)/2;
        int cntsum = 0;
        rep(i, n){
            int cnt = a[i]/mid-1;
            if(a[i]%mid!=0) cnt++;
            cntsum += cnt;
        }
        if(cntsum<=k){
            r = mid;
        }else{
            l = mid;
        }
    }

    cout << r << endl;
    // printf("%d\n", N);
    return 0;
}