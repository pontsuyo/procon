#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define INFLL (int) 4e18

int main(){
    int n;
    cin >> n;

    ll a[n];
    ll as[n+1];
    as[0] = 0;
    rep(i, n){
        cin >> a[i];
        as[i+1] = as[i]+a[i];
    }

    int l=0, r=2, cent = 1;
    ll s[4];
    ll ans = INFLL;
    for (int cent = 1; cent <=n-2 ; cent++) {
        while(l<n-1 && abs((as[cent+1] - as[l+1])-as[l+1]) > abs((as[cent+1] - as[l+2])-as[l+2])){
            l++;
        }

        if(r<=cent) r = cent+1;
        // printf("%d %d %d %d\n", as[cent+1], as[r+1], as[r+2], as[n]);
        while(r<n-1 && abs((as[r+1] - as[cent+1])-(as[n] - as[r+1])) > abs((as[r+2] - as[cent+1])-(as[n] - as[r+2]))){
            r++;
        }

        s[0] = as[l+1];
        s[1] = as[cent+1] - as[l+1];
        s[2] = as[r+1] - as[cent+1];
        s[3] = as[n] - as[r+1];

        // printf("%d %d %d\n", l, cent, r);
        // printf("%d %d %d %d\n", s[0], s[1], s[2], s[3]);

        ll MAX=0, MIN = INFLL;
        rep(i, 4){
            MAX = max(MAX, s[i]);
            MIN = min(MIN, s[i]);
        }
        ans = min(ans, MAX-MIN);

    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}