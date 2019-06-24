#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    printf("%lld\n", B-A+1-B/C+(A-1)/C-B/D+(A-1)/D+B/(C*D/__gcd(C,D)) - (A-1)/(C*D/__gcd(C,D)));
    return 0;
}