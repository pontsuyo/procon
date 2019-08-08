#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++){
        int num = i;
        int f = 2;
        while(num>1){
            while(num%f==0){
                num /= f;
                mp[f]++;
            }
            f++;
        }
    }

    ll ans = 1;
    for (auto u: mp){
        ans *= u.second + 1;
        ans %= MOD;
    }


    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}