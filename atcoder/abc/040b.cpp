#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    int nn;
    int ans = n;
    for(int i=1; i<=sqrt(n) ;i++){
        nn = n;
        int a = nn/i;
        nn -= a*i;
        ans = min(ans, nn + abs(a-i));
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}