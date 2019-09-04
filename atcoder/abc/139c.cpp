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

    int h[n];
    rep(i, n){
        cin >> h[i];
    }

    int tmp = 0, MAX = 0;
    rep(i, n-1){
        if(h[i] >= h[i+1]){
            tmp++;
            MAX = max(MAX, tmp);
        }else{
            tmp = 0;
        }
    }
    cout << MAX << endl;
    // printf("%d\n", N);
    return 0;
}