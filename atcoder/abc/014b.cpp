#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int n, X;
    cin >> n >> X;
    int sum = 0;
    rep(i, n){
        int a; cin >> a;
        if(X%2==1){
            sum += a;
        }
        X >>= 1;
    }
    printf("%d\n", sum);
    return 0;
}