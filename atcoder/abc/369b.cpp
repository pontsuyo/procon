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
    int n;
    cin >> n;

    int a;
    string s;
    vector<int> l, r;

    rep(i, n){
        cin >> a >> s;
        if(s=="L"){
            l.emplace_back(a);
            continue;
        }else{
            r.emplace_back(a);
        }
    }
    
    int sum = 0;

    rep(i, l.size()-1){
        sum += abs(l[i+1]-l[i]);
    }
    rep(i, r.size()-1){
        sum += abs(r[i+1]-r[i]);
    }

    cout << sum << endl;
    // printf("%d\n", N);
    return 0;
}