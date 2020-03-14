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
    int n, m;
    cin >> n >> m;
    int ma[n];
    rep(i, n){
        ma[i]=INF;
    }
    rep(i, m){
        int s, c;
        cin >> s >> c;
        --s;
        if(ma[s]==INF){
            ma[s]=c;
        }else if(ma[s]==c){
            continue;
        } else{
            cout << -1 << endl;
            return 0;
        }
    }
    if(n>=2 && ma[0]==0){
        cout << -1 << endl;
        return 0;
    }

    rep(i, n){
        if(ma[i]!=INF){
            cout << ma[i];
        }else{
            if(i==0){
                if(n!=1){
                    cout << 1;
                }else{
                    cout << 0;
                }
            }else{
                cout << 0;
            }
        }
    }
    
    cout << endl;
    // printf("%d\n", N);
    return 0;
}