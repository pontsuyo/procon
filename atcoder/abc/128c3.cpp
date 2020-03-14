#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    int k[m], s[10][10];
    rep(i, m){
        cin >> k[i];
        rep(j, k[i]){
            cin >> s[i][j];
        }
    }
    int p[m];
    rep(i, m){
        cin >> p[i];
    }

    int ans = 0;
    bool ok;
    rep(iii, (int)pow(2, n)){
        ok = true;
        int ss[n];
        int ii = iii;
        rep(i, n){
            ss[i] = ii%2;
            ii/=2;
        }
        
        rep(i, m){
            int c = 0;
            rep(j, k[i]){
                if(ss[s[i][j]-1]==1){
                    c++;
                }
            }
            if((p[i]-c)%2!=0){
                ok = false;
                break;
            }
        }
        if(ok){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}