#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll cnt = 1;
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[i] > a[i-1]){
            cnt++;
        }else{
            ans += cnt * (cnt-1)/2;
            cnt = 1;
        }
    }

    ans += cnt * (cnt-1)/2;
    cout << ans + n << endl;
    return 0;
}