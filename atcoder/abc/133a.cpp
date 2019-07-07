#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    printf("%d\n", min(N*A, B));
    return 0;
}