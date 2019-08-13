#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> bs[100005];
    rep(i, n){
        int a, b;
        cin >> a >> b;
        bs[a].emplace_back(b);
    }

    ll ans = 0;
    priority_queue<int, vector<int>> q;
    for (int i = 1; i <= m ; i++){
        rep(j, bs[i].size()){
            q.push(bs[i][j]);
        }
        if(!q.empty()){
            ans += q.top();
            q.pop();
        }
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}