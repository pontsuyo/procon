#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int h, w;
    cin >> h >> w;
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];


    int c[h][w];

    int tmp = a[0], num = 1;
    rep(i, h * w){
        int hi = i/w;

        int wi;
        if(hi%2==0){
            wi = i%w;
        }else{
            wi = (w-1)-i%w;
        }
        c[hi][wi] = num;
        tmp--;
        if(tmp==0){
            tmp += a[num];
            num++;
        }
    }

    rep(i, h){
        rep(j, w){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    // printf("%d\n", N);
    return 0;
}