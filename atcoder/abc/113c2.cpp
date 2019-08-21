#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;
    int p[m], y[m];
    map<int, vector<int>> mp;

    rep(i, m){
        cin >> p[i] >> y[i];
        mp[p[i]].emplace_back(y[i]);
    }

    for (auto& p : mp){
        sort(p.second.begin(), p.second.end());
    }

    rep(i, m){
        int num = lower_bound(mp[p[i]].begin(), mp[p[i]].end(), y[i]) - mp[p[i]].begin();
        printf("%06d", p[i]);
        printf("%06d\n", num+1);
    }
    return 0;
}