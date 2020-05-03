#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 2e18

int main(){
    int n, m;
    cin >> n >> m;

    if(n%2==1){
        repr(i, 1, m){
            cout << i << " " << n-i << endl;    
        }
    }else{
        int cnt = 0;
        int t1 = n/2-1;
        int t2 = n/2-2;
        for (int i = 1; i < 2+t1-i; i++)
        {
            cout << i << " " << 2+t1-i << endl;    
            cnt++;
            if(cnt>=m) return 0;
        }
        
        for (int i = n; 2*n -t2-i < i; i--)
        {
            cout << i << " " << 2*n-t2-i << endl;    
            cnt++;
            if(cnt>=m) return 0;
        }
        
        
    }
    // printf("%d\n", N);
    return 0;
}