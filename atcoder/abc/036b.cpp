#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n){
        cin >> s[i];
    }
    rep(i, n){
        rep(j, n){
            cout << s[n-j-1][i];
        }
        cout << endl;
    }
    return 0;
}