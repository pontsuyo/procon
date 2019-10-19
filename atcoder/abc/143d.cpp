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
    vector<int> l(n);
    rep(i, n){
        cin >> l[i];
    }

    sort(l.begin(), l.end());

    ll ans = 0;
    rep(i, n){
        rep(j, n){
            if(i>=j) continue;
            int ma = l[i] + l[j];
            int mi = abs(l[i]-l[j]);

            int a = lower_bound(l.begin()+j, l.end(), ma) - lower_bound(l.begin()+j, l.end(), mi) -1;
            // printf("%d\n", a);
            ans += a;
        }
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}