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
    ll n, a, b;
    cin >> n >> a >> b;

    if((a-b)%2==0){
        cout << abs(a-b)/2 << endl;
        return 0;
    }
    a--;
    b--;
    if(max(a, b)<max(n-a, n-b)){
        cout << max(a, b) << endl;
    }else{
        cout << max(n-a, n-b) << endl;
    }

    // printf("%d\n", N);
    return 0;
}