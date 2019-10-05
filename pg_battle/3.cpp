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
    int a[n], b[n], c[n]={};
    rep(i, n){
        cin >> a[i] >> b[i];
    }

    rep(i, n){
        c[i] = i-a[i]-b[i];
    }
    set<int> ans;
    rep(i, n){
        if(c[i]>=0){
            ans.insert(c[i]);
        }
    }
    cout << ans.size() << endl;
    // printf("%d\n", N);
    return 0;
}