#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, M;
    cin >> N >> M;
    int a[N], b[N];
    rep(i, N){
        cin >> a[i] >> b[i];
    }
    int c[M], d[M];
    rep(i, M){
        cin >> c[i] >> d[i];
    }

    rep(i, N){
        int MIN = 2002002002;
        int num = 0;
        rep(j, M){
            int dist = abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(MIN > dist){
                MIN = dist;
                num = j+1;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}