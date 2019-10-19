#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    int c[n], s[n], f[n];
    rep(i, n-1){
        cin >> c[i] >> s[i] >> f[i];
    }
    c[n-1] = 0;
    s[n-1] = 0;
    f[n-1] = 1;
    
    rep(i, n-1){
        int ss = s[i];
        for (int j = i; j < n-1; j++) {
            int t = ss + c[j];
            int tt = t - t%f[j+1] + f[j+1];
            if(t%f[j+1]==0) tt -= f[j+1];

            // printf("%d %d\n", ss, tt);

            ss = max(tt, s[j+1]);
        }
        cout << ss << endl;
    }
    cout << 0 << endl;
    return 0;
}