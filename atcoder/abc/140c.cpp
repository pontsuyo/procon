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
    int a[n], b[n-1];
    rep(i, n-1){
        cin >> b[i];
    }

    int sum =0 ;
    rep(i, n){
        if(i==0){
            a[i] = b[i];
        }else if(i==n-1){
            a[i] = b[n-2];
        }else {
            a[i] = min(b[i], b[i-1]);
        }
        sum += a[i];
    }
    cout << sum << endl;
    // printf("%d\n", N);
    return 0;
}