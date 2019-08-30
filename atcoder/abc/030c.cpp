#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    vector<int> a(n), b(m);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, m){
        cin >> b[i];
    }

    int ai = 0, bi;
    int cnt = 0;
    while(cnt<n){
        bi = lower_bound(b.begin(), b.end(), a[ai]+x) - b.begin();
        if(bi>=m) break;
        cnt++;
        ai = lower_bound(a.begin(), a.end(), b[bi]+y) - a.begin();
        if(ai>=n) break;
    }

    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}