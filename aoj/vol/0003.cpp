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
    rep(i, n){
        int a[3];
        rep(i, 3){
            cin >> a[i];
        }
        sort(a, a+3);

        if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}