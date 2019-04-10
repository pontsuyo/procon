#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int N, R;
int X[1000];

void solve(){
    sort(X, X+N);
    int i=0, ans=0;
    
    while(i<N){
        int s = X[i++];
        while(i<N && X[i] <= s+R) i++;
        int p = X[i-1];
        while(i<N && X[i] <= p+R) i++;
        ans++;

    }
    printf("%d\n", ans);
}

int main(){
    cin >> N >> R;
    rep(i, N){
        cin >> X[i];
    }
    solve();
    return 0;
}