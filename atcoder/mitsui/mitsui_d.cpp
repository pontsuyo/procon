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

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main(){
    int n;
    string s;
    cin >> n >> s;

    // int pre2[105] = {};

    int ans = 0;
    rep(i, 100){
        int d1 = i/10;
        int d2 = i%10;

        int tmp = -1;
        int tmp2 = -1;
        rep(j, n){
            if(ctoi(s[j])==d1){
                tmp = j;
                break;
            }
        }
        if(tmp==-1) continue;
        for (int k = tmp+1; k < n; k++)
        {
            if(ctoi(s[k])==d2){
                tmp2 = k;
                break;
            }
        }

        if(tmp2==-1) continue;
        set<char> sc;
        for (int j = tmp2+1; j < n; j++){
            sc.insert(s[j]);
        }
        // printf("%d %d\n", i, sc.size());
        ans += sc.size();
    }


    // cout << ans << endl;
    printf("%d\n", ans);
    return 0;
}