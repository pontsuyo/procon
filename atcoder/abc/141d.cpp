#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>> q;

    rep(i, n){
        int a; cin >> a;
        q.push(a);
    }

    rep(i, m) {
        int t = q.top();
        q.pop();
        q.push(t/2);
    }

    ll ans = 0;
    while(!q.empty()){
        ll tmp = q.top();
        q.pop();
        ans += tmp;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}