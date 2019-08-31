#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int t;
    cin >> t;
    rep(i, t){
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, n){
            cin >> a[i];
        }

        int MIN = INF, cnt=0;
        for (int i = n-1; i >= 0; i--){
            if(MIN < a[i]){
                cnt++;
            }
            MIN = min(MIN, a[i]);
        }
        
        cout << cnt << endl;
    }
    
    // printf("%d\n", N);
    return 0;
}