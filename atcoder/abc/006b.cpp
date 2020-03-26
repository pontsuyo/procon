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

int a[1000005];

int main(){
    int n;
    cin >> n;
    n--;

    a[0]=0;
    a[1]=0;
    a[2]=1;
    if(n<=2){
        cout << a[n] << endl;
        return 0;
    }

    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i-1]+a[i-2] + a[i-3];
        a[i] %= 10007;
    }
    
    cout << a[n] << endl;
    // printf("%d\n", N);
    return 0;
}