#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    set <int> s;
    int tmp;

    rep(i, n){
        cin >> tmp;
        s.insert(tmp);
    }

    cout << s.size() << endl;
    return 0;
}