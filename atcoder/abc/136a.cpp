#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(c-(a-b), 0) << endl;
    // printf("%d\n", N);
    return 0;
}