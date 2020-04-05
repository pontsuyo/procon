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

int cnt;
int ans[15];
int k;
bool flag = false;

int dfs(int keta, int n){    
    
    for (int i = 1; i <= 9; i++){
        if(abs(n-i)<=1){
            ans[keta-1] = i;
            dfs(keta-1, i);
            if(cnt==k){
                flag = true;
                rep(i, keta){
                    cout << ans[i];
                }
            }
        }
    }
    if(0==keta) cnt++;
    return 0;
}

int main(){
    cin >> k;
    for (int i = 1; i <= 11; i++){
        for (int j = 1; j <= 9; j++){
            dfs(i, j);
            if(flag) return 0;
        }
    }
}
