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

bool ans[3][3];

int main(){
    int a[3][3];
    
    rep(i, 3)rep(j, 3)cin >> a[i][j];
    int n;
    cin >> n;
    rep(i, n){
        int b;
        cin >> b;
        rep(j, 3)rep(k, 3){
            if(b==a[j][k]){
                ans[j][k]=true;
            }
        }
    }

    rep(i, 3){
        bool tmp=true;
        rep(j, 3){
            tmp &= ans[i][j];
        }
        if(tmp){
            cout << "Yes" << endl;
            return 0;
        }
    }

    rep(i, 3){
        bool tmp=true;
        rep(j, 3){
            tmp &= ans[j][i];
        }
        if(tmp){
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(ans[0][0]&&ans[1][1]&&ans[2][2] || ans[0][2]&&ans[1][1]&&ans[2][0]){
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl;
    // printf("%d\n", N);
    return 0;
}