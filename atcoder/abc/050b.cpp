#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    int T[N];
    int s = 0;
    rep(i, N){
        cin>>T[i];
        s += T[i];
    }
    
    int M; cin >> M;
    int P, X;
    int ans;
    rep(i, M){
        ans = s;
        cin >> P >> X;
        ans -= T[P-1];
        ans += X;
        cout << ans << endl;
    }
    return 0;
}