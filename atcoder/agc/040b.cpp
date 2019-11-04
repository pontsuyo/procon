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
    int n;
    cin >> n;
    pair<ll, ll> p[n], pp[n];
    rep(i, n){
        ll l, r;
        cin >> l >> r;
        p[i].first = l;
        p[i].second = r;
    }

    rep(i, n){
        pp[i] = p[i];
    }

    sort(p, p+n);

    ll ul[n], ur[n], dl[n], dr[n];
    
    ul[0] = p[0].first;
    ur[0] = p[0].second;

    rep(i, n-1){
        ul[i+1] = max(ul[i], p[i+1].first);
        ur[i+1] = min(ur[i], p[i+1].second);
    }

    // rep(i, n-1){
    //     printf("%d %d \n",ul[i], ur[i]);
    // }

    dl[0] = p[n-1].first;
    dr[0] = p[n-1].second;
    rep(i, n-1){
        dl[i+1] = max(dl[i], p[n-i-2].first);
        dr[i+1] = min(dr[i], p[n-i-2].second);
    }

    // rep(i, n-1){
    //     printf("%d %d \n",dl[i], dr[i]);
    // }


    ll ans = 0;
    rep(i, n-1){
        chmax(ans, (ur[i]-ul[i]+1)+(dr[n-i-2]-dl[n-i-2]+1));
        // printf("%d %d \n",(ur[i]-ul[i]+1), (dr[n-i-2]-dl[n-i-2]+1));
    }

    rep(i, n){
        chmax(ans, (p[i].second-p[i].first+1) + max(0LL, (min(ur[i-1], dr[n-i-2])-max(ul[i-1], dl[n-i-2])+1)));
        // printf("%d %d \n",(ur[i]-ul[i]+1), (dr[n-i-2]-dl[n-i-2]+1));
    }


    rep(i, n){
        swap(p[i].first, p[i].second);
    }
    sort(p, p+n);
    rep(i, n){
        swap(p[i].first, p[i].second);
    }

    ul[0] = p[0].first;
    ur[0] = p[0].second;

    rep(i, n-1){
        ul[i+1] = max(ul[i], p[i+1].first);
        ur[i+1] = min(ur[i], p[i+1].second);
    }

    // rep(i, n-1){
    //     printf("%d %d \n",ul[i], ur[i]);
    // }

    dl[0] = p[n-1].first;
    dr[0] = p[n-1].second;
    rep(i, n-1){
        dl[i+1] = max(dl[i], p[n-i-2].first);
        dr[i+1] = min(dr[i], p[n-i-2].second);
    }

    rep(i, n-1){
        chmax(ans, (ur[i]-ul[i]+1)+(dr[n-i-2]-dl[n-i-2]+1));
        // printf("%d %d \n",(ur[i]-ul[i]+1), (dr[n-i-2]-dl[n-i-2]+1));
    }

    rep(i, n){
        chmax(ans, (p[i].second-p[i].first+1) + max(0LL, (min(ur[i-1], dr[n-i-2])-max(ul[i-1], dl[n-i-2])+1)));
        // printf("%d %d \n",(ur[i]-ul[i]+1), (dr[n-i-2]-dl[n-i-2]+1));
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}