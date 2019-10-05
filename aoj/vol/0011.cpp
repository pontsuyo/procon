#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int w, n;
    cin >> w >> n;
    int ans[w+1];
    rep(i, w+1){
        ans[i] = i;
    }
    rep(i, n){
        int a, b;
        scanf("%d,%d", &a, &b);
        // cin >> a >> b;
        swap(ans[a], ans[b]);
    }
    for (int i = 1; i <= w; i++) {
        cout << ans[i] << endl;
    }
    
    // printf("%d\n", N);
    return 0;
}