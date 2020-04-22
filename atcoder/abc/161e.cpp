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
    int n, k, c;
    string s;
    cin >> n >> k >> c >> s;

    int i = 0;
    vector<int> l, r;
    while(i<n){
        if(s[i]=='o'){
            l.emplace_back(i);
            if(l.size()==k) break;
            i += c+1;
        }else{
            i++;
        }
    }

    i = n-1;
    while(i>=0){
        if(s[i]=='o'){
            r.emplace_back(i);
            if(r.size()==k) break;
            i -= c+1;
        }else{
            i--;
        }
    }

    sort(r.begin(), r.end());

    rep(i, k){
        if(l[i]==r[i]) cout << l[i]+1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}