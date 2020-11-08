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
    string s;
    cin >> s;

    map<int, int> m;
    int tmp = 0;
    rep(i, s.size()){
        int v = (int)(s[i]-'0');
        m[v%3]++;
        tmp += v%3;
    }

    int ans;
    if(tmp%3==0){
        ans = 0;
    }else if(tmp%3==1){
        if(m[1]>0){
            ans = 1;
        }else{
            if(m[2]>=2){
                ans = 2;
            }else{
                ans = -1;
            }
        }
    }else{
        if(m[2]>=1){
            ans = 1;
        }else{
            if(m[1]>=2){
                ans = 2;
            }else{
                ans = -1;
            }
        }
    }

    if(ans>=s.size())ans = -1;
    cout << ans << endl;
    return 0;
}