#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

vector<int> e[200005];
int ans[200005];
int c[200005];
bool f[200005];


void func(int p, int x){
    c[p] += x;
    // printf("%d %d\n", p, x);
    for (int i: e[p]){
        c[i] += x;
        func(i, x);
        printf("%d %d\n", i, x);
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

    // int p[q], x[q];
    rep(i, q){
        // cin >> p[i] >> x[i];
        int p, x;
        cin >> p >> x;
        p--;
        
        func(p, x);
    }



    rep(i, n){
        cout << c[i] << " ";
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}