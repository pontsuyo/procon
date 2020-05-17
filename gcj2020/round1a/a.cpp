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
    int t;
    cin >> t;
    rep(ti, t){
        int n; cin >> n;
        vector<string> l, r;
        rep(i, n){
            string s;
            cin >> s;
            int sn = s.size();
            rep(ii, sn){
                if(s[ii]=='*'){
                    l.push_back(s.substr(0, ii));
                    string tmp = s.substr(ii+1, sn-ii-1);
                    reverse(tmp.begin(), tmp.end());
                    r.push_back(tmp);
                }
            }
        }

        string ansl="", ansr="";
        
        sort(l.begin(), l.end());

        bool ok = false, okok = true;
        rep(i, l.size()-1){
            string s1 = l[i];
            string s2 = l[i+1];
            if(s1=="" && s2=="") continue;
            ok =false;
            if(s2.substr(0, s1.size()) == s1){
                ok=true;
                // break;
            }
            if(!ok){
                okok = false;
            }
        }
        
        if(okok){
            ansl = l[l.size()-1];
        }else{
            ansl = "*";
        }

        sort(r.begin(), r.end());

        // rep(i, r.size()){
        //     printf("r[%d] %s\n", i, r[i].c_str());
        // }
        // *左端の場合？
        okok =true;
        rep(i, r.size()-1){
            string s1 = r[i];
            string s2 = r[i+1];
            if(s1=="" && s2=="") continue;
            ok=false;
            if(s2.substr(0, s1.size()) == s1){
                ok=true;
                // break;
            }
            if(!ok){
                okok = false;
            }
        }
        if(okok){
            string tmp = r[r.size()-1];
            reverse(tmp.begin(), tmp.end());
            ansr = tmp;
        }else{
            ansl = "*";
        }
        
        
        string ans = "";
        if(ansl!="*") ans += ansl;
        if(ansr!="*") ans += ansr;
        if(ans=="") ans = "*";

        printf("Case #%d: %s\n", ti+1, ans.c_str());
    }

    return 0;
}