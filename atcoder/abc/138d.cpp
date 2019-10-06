#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

vector<int> edge[200005];
vector<int> ans(200005);
vector<int> x(200005);

void dfs(int s, int prev, int add){
    add += x[s];
    ans[s] = add;
    for (auto v : edge[s]) {
        if(v == prev) continue;
        dfs(v, s, add);
    }
    add -= x[s];
}


int main(){
    int n, q;
    cin >> n >> q;

    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }

    rep(i, q) {
        int p, x_;
        cin >> p >> x_;
        x[--p] += x_;
    }

    dfs(0, -1, 0);

    rep(i, n){
        cout << ans[i];
        if(i!=n-1){
           cout << " ";
        }else{
            cout << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}