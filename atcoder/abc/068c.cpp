#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, m;
    cin >> n >> m;
    pair<int, int> p[n];
    rep(i, n){
        p[i] = P(0,0);
    }
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if(a==0){
            p[b].first= 1;
        }
        if(b==n-1){
            p[a].second=1;
        }
    }
    rep(i, n){
        if(p[i]==P(1,1)){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}