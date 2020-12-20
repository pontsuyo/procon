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
    int n, w;
    cin >> n >> w;

    vector<P> v;
    rep(i, n){
        int s, t, p;
        cin >> s >> t >> p;
        v.emplace_back(P(s, p));
        v.emplace_back(P(t, -p));
    }

    sort(v.begin(),v.end());

    int tmp = 0;
    for (auto &&i : v)
    {
        tmp += i.second;
        if(tmp > w){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}