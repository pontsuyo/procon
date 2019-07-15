#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    rep(i, n){
        int t;
        cin >> t;
        m[i+1] = t;
    }
    int tmp = 1;
    rep(i, n){
        tmp = m[tmp];
        if(tmp==2){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}