#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string o, e;
    cin >> o >> e;
    rep(i, e.size()){
        cout << o[i] << e[i];
    }
    if(o.size()-e.size()==1){
        cout << o[o.size()-1];
    cout << endl;
    return 0;
    }
}