#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, M;
    cin >> N >> M;
    int cnt[N] = {0};
    rep(i, M){
        rep(j, 2){
            int a;
            cin >> a;
            cnt[a-1]++;
        }
    }
    rep(i, N){
        cout << cnt[i] << endl;
    }
    // printf("%d\n", N);
    return 0;
}