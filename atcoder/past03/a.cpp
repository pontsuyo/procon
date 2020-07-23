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
    string s, t;
    cin >> s >> t;
    if(s==t){
        cout << "same" << endl;
    }else{
        locale l = locale::classic();
        bool ok = true;
        rep(i, 3){
            if(tolower(s[i]) != tolower(t[i])) ok = false;
        }
        if(ok){
            cout << "case-insensitive" << endl;
        }else{
            cout << "different" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}