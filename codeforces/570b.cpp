#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int q;
    cin >> q;
    rep(i, q){
        int n, k;
        cin >> n >> k;
        int l=0, r=200000005;
        rep(j, n){
            int a; cin >> a;
            l = max(l, max(a-k, 1));
            r = min(r, a+k);
        }
        if(l<=r){
            cout << r << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}