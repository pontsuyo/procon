#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    int n;
    cin >> n;
    rep(ni, n){
        string s1, s2;
        cin >> s1 >> s2;

        int l1 = s1.size();
        int l2 = s2.size();
        
        vector<int> ans;
        int tmp = 0;
        rep(i,  min(l1, l2)){
            int t1 = (int)(s1[l1-1-i] - '0');
            int t2 = (int)(s2[l2-1-i] - '0');
            int t = t1+t2 + tmp;
            ans.emplace_back(t%10);
            tmp = t/10;
        }
        if(l1 < l2){
            rep(i, l2-l1){
                int ss = (int)(s2[l2-l1-1-i] - '0');
                if(tmp==1){
                    ss++;
                }
                ans.emplace_back(ss%10);
                tmp = ss/10;
            }
        }else if(l1 > l2){
            rep(i, l1-l2){
                int ss = (int)(s1[l1-l2-1-i] - '0');
                if(tmp==1){
                    ss++;
                }
                ans.emplace_back(ss%10);
                tmp = ss/10;
            }
        }
        if(tmp==1) ans.emplace_back(1);
        if(ans.size()>80){
            cout << "overflow" << endl;
            continue;
        }
        
        rep(i, ans.size()){
            cout << ans[ans.size()-1-i];
        }
        cout << endl;
    }

    return 0;
}