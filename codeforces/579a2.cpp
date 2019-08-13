#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int q; cin >> q;
    rep(i, q){
        int n; cin  >> n;
        int a[n];
        rep(j, n){
            cin >> a[j];
        }

        bool flag1=true, flag2=true;
        for (int j = 0; j < n-1; j++){
            if(a[j+1]-a[j]!=1 && a[j+1]-a[j]!=-n+1) flag1=false;
            if(a[j+1]-a[j]!=-1 && a[j+1]-a[j]!=n-1) flag2=false;
        }
        
        if(flag1 || flag2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}