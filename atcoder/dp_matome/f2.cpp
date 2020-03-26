#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int dp[3005][3005];


int main(){
    string s, t;
    cin >> s >> t;

    int ns = s.size();
    int nt = t.size();

    rep(i, ns){
        rep(j, nt){
            if(s[i]==t[j]){
                dp[i+1][j+1] = dp[i][j] + 1;

            }else{
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    vector<char> ans;
    int x=ns, y=nt;
    while(x&&y){
        if(s[x-1]==t[y-1]){
            ans.emplace_back(s[x-1]);
            x--;
            y--;
        }else if(dp[x][y]==dp[x-1][y]){
            x--;
        }else{
            y--;
        }
    }

    rep(i, ans.size()){
        cout << ans[ans.size()-1-i];
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}