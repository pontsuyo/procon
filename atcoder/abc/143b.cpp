#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int d[n];
    rep(i, n){
        cin >> d[i];
    }

    int ans = 0;
    rep(i, n){
        rep(j, n){
            if(i<j){
                ans += d[i]*d[j];
            }
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}