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
    int n;
    cin >> n;
    int p[n], q[n];

    rep(i, n){
        cin >> p[i];
    }
    rep(i, n){
        cin >> q[i];
    }

    int pp=0, qq=0;
    int nn = 1;
    rep(i, n-1){
        nn *= i+1;
    }

    rep(i, n){
        
        int tmpp = 0;
        int tmpq = 0;
        rep(j, n){
            if(i<j){
                if(p[i]<p[j]){
                    tmpp++;
                }
                if(q[i]<q[j]){
                    tmpq++;
                }  
                
            }
        }
        // printf("%d\n", i);
        pp += nn * tmpp;
        qq += nn * tmpq;
        if(i!=n-1) nn /= (n-1-i);
    }

    cout << abs(pp-qq) << endl;
    // printf("%d\n", N);
    return 0;
}