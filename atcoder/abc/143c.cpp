#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 1;
    rep(i, n-1){
        if(s[i]!=s[i+1])ans++;
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}