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
#define LLINF (ll) 1e18

int main(){
    int n;
    cin >> n;
    int a = n%10;
    if(a==3){
        cout << "bon" << endl;
    }else if(a==0 || a==1 ||a==6 ||a==8){
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }
    // printf("%d\n", N);
    return 0;
}