#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n+1, 0);
    
    v[0] = INF;
    rep(i, m){
        // rep(i, v.size()){
        //     cout << v[i] << " ";
        // }
        // cout << endl;

        int a;
        cin >> a;

        // if(i==0){
        //     v[0] = a;
        //     cout << 1 << endl;
        //     continue;
        // }

        int l = 0, r = n;
        while(r-l>1){
            int tmp = (r+l)/2;
            if(v[tmp] < a){
                r = tmp;
            }else{
                l = tmp;
            }
        }
        // printf("l: %d  r: %d\n", l, r);
        if(r==n && v[r]>=a){
            cout << -1 << endl;
        }else{
            cout << l+1 << endl;
            v[l+1] = a;
        }
    }
    // printf("%d\n", N);
    return 0;
}