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


int d[2005];

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    rep(i, n)rep(j, n){
        if(i<j){
            int tmp = j-i;
            if(i<=x && j>=y){
                tmp -= (y-x-1);
            }else if(x <= i && i < y && y <= j){
                // printf("aida\n");
                tmp = min(j-y+i-x+1, j-i);
            }else if(x < j && j < y && i<=x){
                // printf("aida shita\n");
                tmp = min(x-i+y-j+1, j-i);
            }else if(x < i && j < y){
                tmp = min(y-j+i-x+1, j-i);
            }
            d[tmp]++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        cout << d[i] << endl;
    }
    
    // printf("%d\n", N);
    return 0;
}