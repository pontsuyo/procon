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
    int t;
    cin >> t;
    rep(ti, t){
        int n; cin >> n;
        printf("Case #%d:\n", ti+1);

        int tmp = n+1;
        int cnt = 0;
        while(tmp>1){
            tmp /= 2;
            cnt++;
        }

        if(cnt%2==0){
            for (int i = 1; i <= cnt; i++){
                if(i%2==1){
                    for (int j = 1; j <= i; j++){
                        printf("%d %d\n", i, j);
                    }
                }else{
                    for (int j = i; j >= 1; j--){
                        printf("%d %d\n", i, j);
                    }
                }   
            }
        }else{
            for (int i = 1; i <= cnt; i++){
                if(i%2==0){
                    for (int j = 1; j <= i; j++){
                        printf("%d %d\n", i, j);
                    }
                }else{
                    for (int j = i; j >= 1; j--){
                        printf("%d %d\n", i, j);
                    }
                }   
            }
        }

        int sum = (int) pow(2, cnt) -1;
        
        if(sum==n) continue;

        printf("%d %d\n", cnt+1, 1);
        sum++;

        if(sum==n) continue;
        int r = cnt+1;

        if(n < sum+r-1+r){
            rep(i, n-sum){
                printf("%d %d\n", r+1+i, 1);
            }
            continue;
        }
        
        printf("%d %d\n", r, 2);
        sum+=(r-1);
        r++;
        printf("%d %d\n", r, 2);
        sum+=(r-1);
        if(sum==n) continue;

        while(n >= sum+r){
            r++;
            printf("%d %d\n", r, 2);
            sum += (r-1);
        }

        rep(_, n-sum){
            printf("%d %d\n", r+_, 1);
        }   
    }
    return 0;
}