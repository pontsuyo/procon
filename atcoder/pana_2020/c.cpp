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
    ll a, b, c;
    cin >> a >> b >> c;
    if(4*a*b < (c-a-b)*(c-a-b) && c-a-b>0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    // printf("%d\n", N);
    return 0;
}