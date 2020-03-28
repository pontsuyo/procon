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

ll dp[100005];


int main(){
    ll x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    ll p[a], q[b], r[c];
    rep(i, a) cin >> p[i];
    rep(i, b) cin >> q[i];
    rep(i, c) cin >> r[i];
    
    int ans = 0;

    sort(p, p+a, greater<>());
    sort(q, q+b, greater<>());
    sort(r, r+c, greater<>());
    
    rep(i, x) dp[0] += p[i];
    rep(i, y) dp[0] += q[i];

    priority_queue<ll, vector<ll>, greater<ll>> rq, gq;
    rep(i, x) rq.push(p[i]);
    rep(i, y) gq.push(q[i]);

    rep(i, c){
        ll u = r[i];
        rq.push(u);
        ll tmp1 = rq.top();

        gq.push(u);
        ll tmp2 = gq.top();

        dp[i+1] = dp[i];
        if(tmp1>tmp2){
            dp[i+1] += (u-tmp2);
            gq.pop();
        }else{
            dp[i+1] += (u-tmp1);
            rq.pop();
        }
    }

    cout << dp[c] << endl;
    // printf("%d\n", N);
    return 0;
}


// if(p[a-1] < u){
//     ll lb = p[a-1];
//     ll ub = p[0];
//     while(lb < ub){
//         ll tmp = (lb+ub)/2;
//         if(tmp < u){
//             lb = tmp;
//         }else{
//             ub = tmp;
//         }
//     }
