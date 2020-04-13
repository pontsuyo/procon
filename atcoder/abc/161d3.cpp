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
    int k;
    cin >> k;

    queue<ll> q;

    for (ll i = 1; i < 10; i++) q.push(i);
    
    rep(i, k-1){
        ll t = q.front(); q.pop();
        if(t %10 != 0) q.push(10*t + t%10 -1);
        q.push(10*t + t%10);
        if(t%10 != 9) q.push(t*10 + t%10 + 1);
    }

    cout << q.front() << endl;
    // printf("%d\n", N);
    return 0;
}