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
    int q;
    cin >> q;
    rep(kk, q){
        int n; cin >> n;
        int a[n];
        
        rep(i, n){
            cin >> a[i];
        }

        bool used[n];
        rep(i, n-1){
            used[i] = true;
        }
        
        for (int i = 0; i < n-1; i++)
        {
            // printf("%d %d\n", i, a[i]);

            if(a[i] == (i+1)){
                used[i] = false;
                continue;
            }

            int id;
            rep(j, n){
                if(a[j]==i+1){
                    id = j;
                    break;
                }
            }
            
            for (int j = id; used[j-1] && j>0; j--)
            {
                swap(a[j], a[j-1]);
                used[j-1] = false;
            }
        }

        rep(i, n){
            cout << a[i];
            if(i!=n-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}