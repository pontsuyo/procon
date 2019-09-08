#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    rep(i, s.size()-1){
        if(s[i]!=s[i+1]){
            cnt++;
        }
    }
    cout << n-1-max(cnt - 2*k, 0) << endl;
    // printf("%d\n", N);
    return 0;
}