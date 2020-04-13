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
    int n, q;
    string s;
    cin >> n >> s >> q;

    set<int> sa[30];
    rep(i, n){
        sa[s[i]-'a'].insert(i);
    }
    rep(i, q){
        int t; cin >> t;
        if(t==1){
        printf("%d: 1", i+1);
            int i;
            char c;
            cin >> i >> c;
            --i;
            sa[s[i]-'a'].erase(i);
            sa[c-'a'].insert(i);
            s[i] = c;
        }else{
            // printf("%d: 2", i+1);
            // printf("%d: 2", i+1);
            int l, r;
            cin >> l >> r;
            printf("%d: %d 2", l, r);
            --l;
            int ans = 0;
            // for (char i = 'a'; i <= 'z'; i = (char)(i+1)){
            //     if(distance(sa[i-'a'].lower_bound(r), sa[i-'a'].lower_bound(l)) > 0){
            //         ans++;
            //     }
            // }
            printf("%d: 2222", i+1);
            for (int i = 0; i < 26; i++){
                if(distance(sa[i].lower_bound(r), sa[i].lower_bound(l)) > 0){
                    ans++;
                }
            }
            cout << ans << endl;
            printf("%d: 2", i+1);
        }
    }

    return 0;
}