#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int m, d;
    cin >> m >> d;

    int cnt = 0;
    for (int i = 1; i <= m; i++) {
        for (int d10 = 2; d10 <= d/10; d10++) {
            for (int d1 = 2; d1 <= 9; d1++) {
                if (d10*10+d1 <= d && i==d1*d10){
                    // printf("%d %d %d\n", i, d10, d1);
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}