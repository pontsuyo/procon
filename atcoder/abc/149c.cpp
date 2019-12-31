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

int main(){
    int x;
    cin >> x;
    bool flag = false;
    while(!flag){
        flag = true;
        for (int i = 2; i < x-1; i++)
        {
            if(x%i==0){
                flag = false;
            }
        }
        x++;
        // printf("%d\n", x);
    }
    cout << --x << endl;
    // printf("%d\n", N);
    return 0;
}