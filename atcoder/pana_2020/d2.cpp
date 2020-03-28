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

int n;

void dfs(string s, char mx){
    if(s.length() == n){
        cout << s << endl;
    }else{
        for(char c='a'; c<=mx; c++){
            if(c==mx){
                dfs(s+c, char(mx+1));
            }else{
                dfs(s+c, mx);
            }
        }
    }
}

int main(){
    cin >> n;
    dfs("", 'a');
    // printf("%d\n", N);
    return 0;
}