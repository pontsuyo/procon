#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    string s;
    cin >> s;
    rep(i, s.size()){
        cout << s[s.size()-i-1];
    }
    return 0;
}