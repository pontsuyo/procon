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

int comb[200005];

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<>());

    ll sum = 0;
    int id = 0;
    for(int i=1; i<200005; i++){
        sum += i;
        if(sum>m){
            sum -= i;
            id = i-1;
            break;
        }
    }
    printf("%d %d\n", id, sum);
    m -= sum;

    ll ans = 0;
    rep(i, id){
        ans += a[i]*(id-i)*2;
        printf("%d %d\n", i, ans);

    }
    
    printf("%d\n", ans);

    priority_queue<int> q;

    for (int i = 0; i < id+1; i++){
        q.push(a[i] + a[id-i]);
    }

    
    rep(i, m){
        int tmp = q.top();
        q.pop();
        ans += tmp;
        printf("%d %d\n", tmp, ans);

    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}