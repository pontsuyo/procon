#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

vector<int> edge[150005];
bool used[150005];

vector<int> eu;

void dfs(int s, int p){
    eu.emplace_back(s);
    for(int si: edge[s]){
        if(si!=p && !used[si]){
            dfs(si, s);
        }
        used[si] = true;
    }
    eu.emplace_back(s);
    return;
}

int main(){
    int n;
    cin >> n;

    rep(i, n) used[i] = false;

    int st;
    rep(i, n){
        int p;
        cin >> p;
        if(p!=-1){
            edge[i+1].emplace_back(p);
            edge[p].emplace_back(i+1);
        }else{
            st = i+1;
        }
    }

    dfs(st, -1);

    vector<int> l(n+1, LLINF), r(n+1, -1);

    for (int i = 0; i < eu.size(); i++) {
        chmin(l[eu[i]], i);
        chmax(r[eu[i]], i);
    }

    int q; cin >> q;
    rep(i, q){
        int a, b;
        cin >> a >> b;
        if(l[b] < l[a] && r[a] < r[b]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}