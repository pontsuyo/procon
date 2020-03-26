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

        int id = 0;        
        for (int i = 0; i < n-1; i++)
        {
            chmax(id, i);
            for (int j = id; j < n; j++)
            {
                if(a[j]==i+1){
                    for (int k = j; k > id; k--)
                    {
                        swap(a[k], a[k-1]);
                    }
                    id = j;
                    break;
                }
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