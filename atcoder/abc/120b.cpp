#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int a, b, k;
    cin >> a >> b >> k;

    int cnt = 0;
    int d = __gcd(a, b);
    for(int i=d;i>=1;i--){
        if(d%i==0) cnt++;
        if(cnt==k){
            cout << i << endl;
            return 0;
        }
    }
}