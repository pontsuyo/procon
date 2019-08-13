#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i, n){
        cin >> w[i];
    }

    sort(w.begin(), w.end());
    vector<int> val(150005, 0);
    for (int i = 0; i < n; i++)
    {
        if(w[i]-1>0 && val[w[i]-1]==0){
            val[w[i]-1]=1;
        }else if(val[w[i]]==0){
            val[w[i]]=1;
        }else if(val[w[i]+1]==0){
            val[w[i]+1]=1;
        }
    }

    int ans = 0;
    rep(i, val.size()){
        ans += val[i];
    }
    cout << ans << endl;
    return 0;
}