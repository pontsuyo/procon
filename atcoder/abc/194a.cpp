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
    int a, b;
    cin >> a >> b;
	if(a+b>=15 && b>=8){
    	cout << 1 << endl;
	}else if(a+b>=10 && b>=3){
		cout << 2 << endl;
	}else if(a+b>=3){
    	cout << 3 << endl;
	}else{
		cout << 4 << endl;
	}
    // printf("%d\n", N);
    return 0;
}