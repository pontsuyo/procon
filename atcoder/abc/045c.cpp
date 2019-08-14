#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int a[n] = {};
    rep(i, n-1){
        a[i] = (int) pow(2, n-2-i);
    }
    a[n-1] = 1;

    ll ans = 0;
    for (int i = n-1; i >= 0; i--){
        for (int j = i; j >= 0; j--){
            ans += (s[n-1-i]-'0') * pow(10, j) * a[j];
        }
        if(i!=0) a[i-1] += a[i];
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}