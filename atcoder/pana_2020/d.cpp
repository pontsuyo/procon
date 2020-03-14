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

int dp[15][15];

int main(){
    int n;
    cin >> n;

    vector<pair<string, char>> sc;

    sc.emplace_back(make_pair("a", 'a'));

    rep(ii, n-1){
        vector<pair<string, char>> stmp;
        for(auto st: sc){
            int num = st.second -'a';
            for (int i = 0; i < num+2; i++){
                string ssss = st.first;
                ssss += (char)('a'+i);
                stmp.emplace_back(make_pair(ssss, max((char)('a'+i), st.second)));
            }
        }
        sc = stmp;
    }


    rep(i, sc.size()){
        cout << sc[i].first << endl;
    }
    // printf("%d\n", N);
    return 0;
}