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

bool r[100005];
int pe[100005];

int main(){
    int n, m;
    cin >> n >> m;
    
    int ac = 0;

    rep(i, m){
        int p;
        string s;
        cin >> p >> s;
        p--;
        if(r[p]) continue;
        if(s=="WA"){
            pe[p]++;
        }else{
            r[p] = true;
            ac++;
        }
    }

    int ansp = 0;
    rep(i, n){
        if(r[i]){
            ansp += pe[i];
        }
    }

    cout << ac << " " << ansp << endl;
    // printf("%d\n", N);
    return 0;
}