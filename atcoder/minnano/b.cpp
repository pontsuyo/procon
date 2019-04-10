#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a[4] = {0};
    int s, t;
    rep(i, 3){
        cin >> s >> t;
        a[s-1] += 1;
        a[t-1] += 1;
    }
    int odd = 0;
    rep(i, 4){
        if(a[i]%2==1) odd += 1;
    }
    if(odd==2 || odd==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}