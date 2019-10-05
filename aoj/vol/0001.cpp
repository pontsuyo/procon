#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int a[10];
    rep(i, 10){
        cin >> a[i];
    }

    sort(a, a+10, greater<>());

    rep(i, 3){
        cout << a[i] << endl;
    }
    // printf("%d\n", N);
    return 0;
}