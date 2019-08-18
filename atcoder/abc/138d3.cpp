#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

vector<int> e[200005];
int c[200005];
bool f[200005];
set<int> edge[200005];

void add(int i){
    edge[i].insert(i);
    for(auto v: e[i]){
        edge[v].insert(v);
        if(e[v].size()==0){
            edge[i].insert(v);
        }else{
            add(v);
            edge[i].insert(edge[v].begin(), edge[v].end());
        }
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    // int a[n], b[n];
    rep(i, n-1){
        // cin >> a[i] >> b[i];
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        e[a].emplace_back(b);
    }

    add(0);

    rep(i, n){
        printf("%d\n", i);
        for (auto k: edge[i])
        {
            cout << k << " ";
        }
        cout << endl;
    }

    rep(i, q){
        // cin >> p[i] >> x[i];
        int p, x;
        cin >> p >> x;
        p--;
        for(auto k: edge[p]){
            c[k] += x;
        }
    }



    rep(i, n){
        cout << c[i] << " ";
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}