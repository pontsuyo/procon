#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int h, w;
    cin >> h >> w;
    int c[10][10];
    rep(i, 10) rep(j, 10) cin >> c[i][j];
    rep(k, 10) rep(i, 10) rep(j, 10) c[i][j] = min(c[i][j], c[i][k]+c[k][j]);
    
    int cnt = 0;
    rep(i, h){
        rep(j, w){
            int a; cin >> a;
            if(a!=-1) cnt += c[a][1];
        }
    }
    cout << cnt << endl;
    return 0;
}