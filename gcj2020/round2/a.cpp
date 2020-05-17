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
    int t;
    cin >> t;
    rep(ti, t){
        ll L, R;
        cin >> L >> R;
        ll rtime = 0;
        printf("\n");

        if( L < R){
            ll l=L, r=R;
            ll tl=0, tr=1e9;
            while(tr-tl>1){
                ll tmp = (tl+tr)/2;
                if(r-l >= tmp*(tmp+1)/2){
                    tl = tmp;
                }else{
                    tr = tmp;
                }
            }
            // printf("tl:%d tr:%d\n", tl, tr);
            R -= tl*(tl+1)/2;
            rtime = tl;
            // printf("L:%d R:%d\n", L, R);
        }
        
        ll l=L, r=R;
        ll tl=0, tr=1e9;
        while(tr-tl>1){
            ll tmp = (tl+tr)/2;
            if(l-r >= tmp*(tmp+1)/2){
                tl = tmp;
            }else{
                tr = tmp;
            }
        }
        printf("tl:%d tr:%d\n", tl, tr);
        // tl++;
        l -= tl*(tl+1)/2;
        // printf("l:%d r:%d\n", l, r);
        ll n = tr+rtime;

        printf("l:%d n:%d\n", l, n);

        ll tl1, tl2;
        if(l<n){
            tl1 = -1;
        }else{
            tl=-1, tr=1e9;
            while(tr-tl>1){
                ll tmp = (tl+tr)/2;
                if(l >= (n+tmp)*(tmp+1)){
                    tl = tmp;
                }else{
                    tr = tmp;
                }
            }
            tl1 = tl;
        }

        
        // l -= (n+1+tl)*(tl+1);
        
        if(r<n+1){
            tl2 = -1;
        }else{
            tl=-1, tr=1e9;

            while(tr-tl>1){
                ll tmp = (tl+tr)/2;
                if(r >= (n+1+tmp)*(tmp+1)){
                    tl = tmp;
                }else{
                    tr = tmp;
                }
            }
            tl2 = tl;
        }
        
        printf("tl1:%lld tl2:%lld\n",tl1, tl2);
        ll ntimes = 0;
        if(tl1 <= tl2){
            if(tl1!=-1) l -= (n+tl1)*(tl1+1);
            if(tl1!=-1) r -= (n+tl1+1)*(tl1+1);
            if(tl1!=-1) ntimes = tl1*2;
        }else{
            if(tl2!=-1) l -= (n+tl2+1)*(tl2+1+1);
            if(tl2!=-1) r -= (n+tl2+1)*(tl2+1);
            if(tl2!=-1) {
                ntimes=2*tl2+1;
            }else{
                ntimes=1;
            }
        }

            printf("Case #%d: %lld %lld %lld\n", ti+1, n-1+ ntimes, l, r);
        
        
        // string ans = "";
        // printf("Case #%d: %s\n", ti+1, ans.c_str());
    }

    return 0;
}