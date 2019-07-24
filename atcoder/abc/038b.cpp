#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int h1, w1, h2, w2;
    cin >> h1 >> w1 >> h2 >> w2;
    if(h1==h2 || h1==w2 || w1==h2 || w1==w2){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}