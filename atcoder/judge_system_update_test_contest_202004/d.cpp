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
    int n, q;
    cin >> n >> q;
    int a[n], s[q];
    rep(i, n) cin >> a[i];
    rep(i, q) cin >> s[i];

    // vector<P> v;
    // int tmp = a[0];
    // v.emplace_back(P(1, tmp));
    // rep(i, n-1){
    //     if(tmp != __gcd(tmp, a[i+1])){
    //         tmp = __gcd(tmp, a[i+1]);
    //         v.emplace_back(P(i+2, tmp));
    //     }
    // }

    vector<int> v;
    int tmp = a[0];
    v.emplace_back(tmp);
    rep(i, n-1){
        tmp = __gcd(tmp, a[i+1]);
        v.emplace_back(tmp);
    }

    int vn = v.size();

    rep(i, q){
        // if(__gcd(s[i], a[0]) == 1){
        //     cout << 1 << endl;
        //     continue;
        // }
        
        if(__gcd(s[i], tmp) != 1){
            cout << __gcd(s[i], tmp) << endl;
            continue;
        }

        int l = -1, r = vn-1;
        int id;
        while(l+1<r){
            id = (l+r)/2;
            if(__gcd(s[i], v[id]) != 1){
                l = id;
            }else{
                r = id;
            }
        }
        cout << r+1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}