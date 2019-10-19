#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }

    ll s = a[0];
    ll ss = a[0];
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        s = ss;
        ss = s + a[i];
        // printf("%d %d\n", s, ss);
        if(ss*s<0) continue;
        if(ss==0){
            ans += 1;
            ss = -s/abs(s);
        }else{
            ans += abs(ss - (-ss/abs(ss)));
            ss = -ss/abs(ss);
        }
    }

    if(a[0]!=0){
        int tmp = -a[0]/abs(a[0]);
        ll ans2 = abs(a[0] - tmp);
        a[0] = tmp;
        s = a[0];
        ss = a[0];
    }else{


    }
    
    for (int i = 1; i < n; i++) {
        s = ss;
        ss = s + a[i];
        // printf("%d %d\n", s, ss);
        if(ss*s<0) continue;
        if(ss==0){
            ans2 += 1;
            ss = -s/abs(s);
        }else{
            ans2 += abs(ss - (-ss/abs(ss)));
            ss = -ss/abs(ss);
        }
    }
    
    cout << min(ans, ans2) << endl;
    // printf("%d\n", N);
    return 0;
}