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

int table[10][10];

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int keta10 = 1;
    for (int i = 1; i <= n; i++) {
        if(i==10){
            keta10 = 10;
        }else if(i==100){
            keta10 = 100;
        }else if(i==1000){
            keta10 = 1000;
        }else if(i==10000){
            keta10 = 10000;
        }else if(i==100000){
            keta10 = 100000;
        }
        
        int shimo = i%10;
        int kami = i/keta10;

        int tmp = table[shimo][kami];
        if(shimo==kami){
            ans += tmp*2+1;
        }else{
            ans += tmp*2;
        }

        table[kami][shimo]++;
    }
    

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}