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
    int h, w, k;
    cin >> h >> w >> k;

    string s[h];
    rep(i, h) cin >> s[i];

    int ans = 0;
    rep(hi, 1<<h){

        bool hb[h];
        int hh = hi;
        rep(i, h){
            if(hh%2==1) hb[i]=true;
            else hb[i]=false;
            hh >>= 1;
        }

        rep(wi, 1<<w){
            bool wb[h];
            int ww = wi;
            rep(i, w){
                if(ww%2==1) wb[i]=true;
                else wb[i]=false;
                ww >>= 1;
            }

            int cnt=0;
            rep(hhi, h){
                rep(wwi, w){
                    if(hb[hhi] && wb[wwi]){
                        if(s[hhi][wwi]=='#') cnt++;
                    }
                }
            }
            if(cnt==k) ans++;

        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}