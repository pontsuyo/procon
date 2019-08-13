#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int k, x;
    cin >> k >> x;
    for (int i = x-k+1; i <= x+k-1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}