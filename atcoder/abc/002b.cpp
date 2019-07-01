#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string W;
    cin >> W;
    rep(i, W.size()){
        if(W[i]!='a' && W[i]!='i' && W[i]!='u' && W[i]!='e' && W[i]!='o'){
            cout << W[i];
        }
    }
    cout << endl;
    return 0;
}