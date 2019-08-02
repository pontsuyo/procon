#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    int s[n];
    int S=0;
    vector<int> rem;
    rep(i, n){
        cin >> s[i];
        S += s[i];
        if(s[i]%10!=0){
            rem.emplace_back(s[i]);
        }
    }

    if(S%10!=0){
        cout << S << endl;
        return 0;
    }

    if(rem.size()==0){
        cout << 0 << endl;
        return 0;
    }

    sort(rem.begin(), rem.end());
    cout << S-rem[0] << endl;
    return 0;
}