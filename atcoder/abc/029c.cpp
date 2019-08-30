#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

void f(int rest, string s) {
    if (rest == 0) {
        cout << s << endl;
    } else {
        for (char c = 'a'; c <= 'c'; c++) {
            f(rest - 1, s+c);
        }
    }
}

int main(){
    int n;
    cin >> n;
    f(n, "");
    return 0;
}