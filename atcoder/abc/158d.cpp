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
    string s;
    int q;
    cin >> s >> q;
    vector<char> l, r, tt;
    int cnt=0;
    rep(i, q){
        int t; cin >> t;
        if(t==1){
            cnt++;
            tt = l;
            l = r;
            r = tt;
        }else{
            int f;
            char c;
            cin >> f >> c;
            if(f==1){
                l.emplace_back(c);
            }else{
                r.emplace_back(c);
            }
        }
    }

    rep(i, l.size()){
        cout << l[l.size()-1-i];
    }
    if(cnt%2==0){
        cout << s;
    }else{
        rep(i, s.size()){
            cout << s[s.size()-i-1];
        }
    }
    rep(i, r.size()){
        cout << r[i];
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}