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
    string s;

    cin >> n >> s;

    for (int i = n/2; i > 0; i--){
        for (int j = 0; j +i*2 <= n; j++){
            for (int k = j+i; k+i <= n; k++) {
                if(s.substr(j, i) == s.substr(k, i)){
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }
    cout << 0 << endl;
    return 0;
}