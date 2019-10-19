#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;

    int ans = 1;
    for (int i = 1; i*i <= m; i++) {
        if(m%i==0){
            if(m/i >= n) ans = max(ans, i);
            if(i >= n) ans = max(ans, m/i);
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}