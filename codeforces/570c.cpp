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
        ll k, n, a, b;
        cin >> k >> n >> a >> b;
        if(k <= n*b){
            cout << -1 << endl;
        }else{
            k -= n*b;
            cout << min((k-1)/(a-b), n) << endl;
        }
    }
    return 0;
}