#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    string s, t;
    cin >> s >> t;

    int cnt = 0;
    rep(i, 3){
        if(s[i]==t[i]) cnt++;
    }
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}