#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll n, m;
    cin >> n >> m;
    if(m <= n*2){
        cout << m/2 << endl;
    }else{
        ll  remc = m-n*2;
        cout << n + remc/4 << endl;
    }
    // printf("%d\n", N);
    return 0;
}