#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    rep(i, n){
        cin >> s[i];
    }
    sort(s.begin(), s.end());

    rep(i, n){
        cout << s[i];
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}