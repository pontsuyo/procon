#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 1; i*i <= m; i++){
        if(m%i==0){
            v.emplace_back(i);
            if(i*i!=m) v.emplace_back(m/i);
        }
    }

    sort(v.begin(), v.end());

    cout << v[upper_bound(v.begin(), v.end(), m/n) - v.begin()-1] << endl;
    return 0;
}