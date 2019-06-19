#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    rep(i, n){
        string s, t;
        cin >> s >> t;
        vector<tuple<char, int>> ss;
        vector<tuple<char, int>> tt;

        s += "0";
        t += "0";

        int tmp = 1;

        rep(i, s.size()){
            if(s[i] != s[i+1]){
                ss.emplace_back(tie(s[i], tmp));
                tmp = 1;
            }else{
                tmp++;
            }
        }

        tmp = 1;
        rep(i, t.size()){
            if(t[i] != t[i+1]){
                tt.emplace_back(tie(t[i], tmp));
                tmp = 1;
            }else{
                tmp++;
            }
        }
        int k=0;
        rep(i, ss.size()){
            char cs, ct;
            int cnts, cntt;
            
            tie(cs, cnts) = ss[i];
            tie(ct, cntt) = tt[k];
            if(cs!=ct || cnts > cntt){
                printf("NO\n");
                break;
            }
            k++;
            if(i==ss.size()-1){
                printf("YES\n");
            }
        }
    }
    return 0;
}