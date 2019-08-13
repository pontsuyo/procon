#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n, m;
    cin >> n >> m;
    // vector<int> a(n), b(n);
    // priority_queue<P, vector<P>> p;
    vector<P> p;
    rep(i, n){
        int a_, b_;
        cin >> a_ >> b_;
        // p.push(make_pair(a_, b_));
        p.emplace_back(make_pair(m+1-a_, -b_));
    }

    sort(p.begin(), p.end());

    vector<int> val(100001, 0);
    ll ans = 0;
    // int i=m-1;
    for (int i = 0; i < n; i++){
        int ind = lower_bound(p.begin(), p.end(), make_pair(i, -1000000)) - p.begin();
        // printf("%d\n", ind);
        if(ind>=0 && ind <= n-1 && val[ind]==0){
            printf("%d %d\n", ind, p[ind].second);
            ans += -p[ind].second;
            val[ind] = 1;
        }
    }

    // rep(i, val.size()-1){
    //     ans += val[i];
    // }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}