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
    char ans[n];

    string a[n];
    set<char> csets[n];
    rep(i, n){
        cin >> a[i];
        rep(j, n){
            csets[i].insert(a[i][j]);
        }
    }

    for (int i = 0; i <= (n-1)/2; i++){
        if(i==n-1-i){
            ans[i] = a[i][0];
        }
        bool ok = false;
        for (auto ci : csets[i]){
            if(csets[n-1-i].find(ci) != csets[n-1-i].end()){
                ans[i] = ci;
                ans[n-1-i] = ci;
                ok = true;
                break;
            }
        }

        if(!ok){
            cout << -1 << endl;
            return 0;
        }
    }
    

    for (auto c : ans)
    {
        cout << c;
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}