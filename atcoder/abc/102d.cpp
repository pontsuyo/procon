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

    int cd;
    ll MIN = INFLL;
    rep(i, n){
        if(MIN > abs((as[n] - as[i]) - as[i])){
            MIN = abs((as[n] - as[i]) - as[i]);
            cd = i;
        };
    }

    ll s[4];

    MIN = INFLL;
    rep(j, cd){
        if(MIN > abs((as[cd] - as[j])-as[j])){
            MIN = abs((as[cd] - as[j])-as[j]);
            s[0] = as[j];
            s[1] = as[cd] - as[j];
        };
    }

    MIN = INFLL;
    for (int j = cd; j < n; j++) {
        if(MIN > abs((as[n] - as[j])-(as[j] - as[cd]))){
            MIN = abs((as[n] - as[j])-(as[j] - as[cd]));
            s[2] = as[j] - as[cd];
            s[3] = as[n] - as[j];
        };
    }

    printf("%d %d %d %d\n", s[0], s[1], s[2], s[3]);

    ll ans_max = 0;
    ll ans_min = INFLL;
    rep(i, 4){
        ans_max = max(ans_max, s[i]);
        ans_min = min(ans_min, s[i]);
    }

    cout << ans_max-ans_min << endl;
    // printf("%d\n", N);
    return 0;
}