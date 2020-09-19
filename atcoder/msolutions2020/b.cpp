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
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int cnt = 0;
    while(a >= b){
        cnt++;
        b *= 2;
    }

    while(b >= c){
        cnt++;
        c *= 2;
    }
    
    if(cnt <= k){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    // printf("%d\n", N);
    return 0;
}