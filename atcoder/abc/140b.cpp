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
    int a[n], b[n], c[n-1];
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
    }
    rep(i, n-1){
        cin >> c[i];
    }

    int sum = 0;
    rep(i, n){
        sum += b[a[i]-1];
        if(i>=1 && a[i] == a[i-1]+1){
            sum += c[a[i-1]-1];
        }
    }

    cout << sum << endl;
    // printf("%d\n", N);
    return 0;
}