#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int a = A%B;
    rep(i, B){
        if(a*i%B==C){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;

}