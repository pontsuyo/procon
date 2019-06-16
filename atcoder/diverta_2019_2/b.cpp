#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    int x[N], y[N];
    rep(i, N){
        cin >> x[i] >> y[i];
    }

    int MIN = N;
    rep(i, N){
        rep(j, N){
            if(i==j) continue;
            int ans = N;
            int dx = x[j] - x[i];
            int dy = y[j] - y[i];
            rep(k, N){
                rep(l, N){
                    if(k==l) continue;
                    if(x[l]-x[k]==dx && y[l]-y[k]==dy){
                        ans--;        
                    }
                }
            }
            MIN = min(ans, MIN);
        }
    }
    printf("%d\n", MIN);
    return 0;
}