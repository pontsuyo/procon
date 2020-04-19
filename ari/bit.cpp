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

// [1, n]
int bit[100000 + 1], n;

int sum(int i) {
    int s = 0;
    while(i>0){
        s += bit[i];
        i -= i& -i;
    }
    return s;
}

void add(int i, int x){
    while(i <= n){
        bit[i] += x;
        i += i& -1;
    }
}

int main(){
    cin >> n;
    rep(i, n) cin >> bit[i];

    cout << sum(3) -sum(1)<< endl;

    return 0;
}