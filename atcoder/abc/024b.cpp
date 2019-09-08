#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, t;
    cin >> n >> t;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    int sum = 0;
    rep(i, n-1){
        sum += min(a[i+1] - a[i], t);
    }
    sum += t;
    printf("%d\n", sum);
    return 0;
}