#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

vector<int> E[200];
int d[200]={}, f[200]={};

int func(int pos, int time){
    if(d[pos]>0){
        return time;
    }
    d[pos] = time;
    time++;
    for (int to : E[pos]){
        time = func(to, time);
    }
    f[pos] = time;
    time++;
    return time;
}

int main(){
    int n;
    cin >> n;
    rep(i, n){
        int u, k;
        cin >> u >> k;
        rep(j, k){
            int v;
            cin >> v;
            E[u].push_back(v);
        }
    }
    int time = 1;
    for (int i = 1; i <= n; i++){
        if(d[i]==0){
            time = func(i, time);
        }
        cout << i << " " << d[i] << " " << f[i] << endl;
    }
    // printf("%d\n", N);
    return 0;
}