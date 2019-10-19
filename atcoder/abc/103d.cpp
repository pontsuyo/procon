#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n , m;
    cin >> n >> m;

    vector<P> p;
    rep(i, m){
        int a,b;
        cin >> a >> b;
        p.emplace_back(P(--b, --a));
    }

    sort(p.begin(), p.end());

    int idx = p[0].first-1;
    int cnt = 1;

    rep(i, m){
        int a = p[i].second;
        if(a <= idx) continue;
        
        idx = p[i].first -1;
        cnt++;
    }

    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}