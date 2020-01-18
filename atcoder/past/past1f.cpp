#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    string s;
    vector<string> ss;
    cin >> s;
    int r = 1;
    int l = 0;
    while(r<s.size()){
        if(s[r]>='A' && s[r]<='Z'){
            ss.emplace_back(s.substr(l, r-l+1));
            l = r+1;
            r += 2;
        }else{
            r++;
        }
    }

    vector<pair<string, string>> sss;
    rep(i, ss.size()){
        string tm = ss[i];
        transform(tm.begin(), tm.end(), tm.begin(), ::tolower);
        sss.emplace_back(make_pair(tm, ss[i]));
    }

    // rep(i, ss.size()){
    //     cout << ss[i] << endl;
    // }
    // cout << endl;

    sort(sss.begin(), sss.end());

    rep(i, sss.size()){
        cout << sss[i].second;
    }
    cout << endl;
    // rep(i, ss.size()){
    //     cout << ss[i];
    // }
    // cout << endl;

    return 0;
}