#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    int maxl[n], maxr[n];
    maxl[0] = 0;
    maxr[n-1] = 0;
    
    for (int i = 1; i < n; i++){
        maxl[i] = max(maxl[i-1], a[i-1]);
    }
    for (int i = n-2; i >= 0; i--)
    {
        maxr[i] = max(maxr[i+1], a[i+1]);
    }

    rep(i, n){
        cout << max(maxl[i], maxr[i]) << endl;
    }

    // printf("%d\n", N);
    return 0;
}