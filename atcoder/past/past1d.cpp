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

int main(){
    int n;
    cin >> n;

    map<int, int> m;
    int a;
    rep(i, n){
        cin >> a;
        m[a]++;
    }

    int be=0, af=0;
    rep(i, n){
        if(m[i+1]==0){
            be = i+1;
        }
        if(m[i+1]==2){
            af = i+1;
        }
    }

    if(be==0){
        cout << "Correct" << endl;
    }else{
        cout << af << " " << be << endl;
    }
    // printf("%d\n", N);
    return 0;
}