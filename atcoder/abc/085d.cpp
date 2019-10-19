#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, h;
    cin >> n >> h;

    vector<int> a(n), b(n);
    int maxid = 0;
    int a_ = 0;
    rep(i, n){
        cin >> a[i] >> b[i];
        if(a_ < a[i]){
            maxid = i;
            a_ = a[i];
        }
    }

    vector<int> cand;
    rep(i, n){
        if(b[i]>a_) cand.emplace_back(b[i]);
    }

    sort(cand.begin(), cand.end(), greater<>());

    int ans = 0;
    for(auto bi: cand){
        h -= bi;
        ans++;
        if(h<=0) break;
    }

    if(h>0){
        int q = h%a_;
        int p = h/a_;
        ans += p;
        if(q>0) ans++;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}