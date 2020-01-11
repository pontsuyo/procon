#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n, a;
    cin >> n >> a;

    int x[n];
    rep(i, n){
        cin >> x[i];
    }

    ll ans = 0;
    rep(ii, 1<<n){
        int use[n];
        int iii = ii;
        rep(i, n){
            use[i] = iii%2;
            iii /= 2;
        }
        int sum = 0;
        int cnt = 0;
        rep(i, n){
            if(use[i]==1){
                sum += x[i];
                cnt++;
            }
        }

        if(a == (double)sum/cnt){
            ans++;
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}