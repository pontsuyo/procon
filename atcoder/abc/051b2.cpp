#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int k, s;
    cin >> k >> s;
    
    int ans = 0;
    rep(x, k+1){
        rep(y, k+1){
            int z = s-x-y;
            if(z>=0 && z <= k) ans++;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}