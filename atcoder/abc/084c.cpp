#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    int c[n-1], s[n-1], f[n-1];
    rep(i, n-1){
        cin >> c[i] >> s[i] >> f[i];
    }
    
    int ans[n] = {};
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j <= i; j++){
            if (ans[j] < s[i]){
                ans[j] = s[i] + c[i];
            }else{
                int tmp = ans[j]/f[i];
                ans[j] = f[i] * tmp + c[i];
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    
    // printf("%d\n", N);
    return 0;
}