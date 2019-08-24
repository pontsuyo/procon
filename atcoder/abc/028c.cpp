#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int a[5];
    rep(i, 5){
        cin >> a[i];
    }

    cout << max(a[0]+a[3]+a[4], a[1]+a[2]+a[4]) << endl;
    // printf("%d\n", N);
    return 0;
}