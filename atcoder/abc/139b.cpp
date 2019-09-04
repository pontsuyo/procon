#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int a, b;
    cin >> a >> b;

    int ans = (b-1)/(a-1);
    if((b-1)%(a-1)>0) ans++;

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}