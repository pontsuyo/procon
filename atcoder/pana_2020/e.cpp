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
    string ss[3];
    rep(i, 3) cin >> ss[i];

    vector<int> vvv{0,1,2};
    vector<vector<int>>v;
    for( int i = 0; i < 6; ++i ){
        v.emplace_back(vvv);
        next_permutation( begin(vvv), end(vvv));
    }

    int ans = INF;
    rep(iii, 6){
        // printf("iii= %d\n", iii);
        string s[3];
        rep(i, 3){
            s[i] = ss[v[iii][i]];
        }

        
        int pos = INF;
        for (int i = 0; i < s[0].size(); i++){
            bool ok = true;
            for (int j = i; j <= min(i+s[1].size()-1, s[0].size()-1); j++){
                if(s[1][j-i]!=s[0][j] && s[1][j-i]!='?' && s[0][j]!='?'){
                    ok = false;
                    break;
                }
            }
            if(ok){
                pos = i;
                break;
            }
        }

        if(pos!=INF){
            for (int i = 0; i <= s[0].size()-pos; i++){
                if(s[0][i+pos]=='?'){
                    s[0][i+pos] = s[1][i];
                }
            }

            if(s[0].size()-1 < pos+s[1].size()-1){
                s[0] += s[1].substr(s[0].size()-pos, pos+s[1].size()-s[0].size());
            }
            
        } else{
            s[0] += s[1];
        }
        // cout << s[0] << endl;


        s[1] = s[2];
        pos = INF;
        for (int i = 0; i < s[0].size(); i++){
            bool ok = true;
            for (int j = i; j <= min(i+s[1].size()-1, s[0].size()-1); j++){
                if(s[1][j-i]!=s[0][j] && s[1][j-i]!='?' && s[0][j]!='?'){
                    ok = false;
                    break;
                }
            }
            if(ok){
                pos = i;
                break;
            }
        }

        // printf("%d\n", pos);
        
        if(pos!=INF){
            for (int i = 0; i <= s[0].size()-pos; i++){
                if(s[0][i+pos]=='?'){
                    s[0][i+pos] = s[1][i];
                }
            }


            if(s[0].size()-1 < pos+s[1].size()-1){
                s[0] += s[1].substr(s[0].size()-pos, pos+s[1].size()-s[0].size());
            }
        } else{
            s[0] += s[1];
        }

        ans = min(ans, (int)s[0].size());
        // cout << s[0] << endl;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}