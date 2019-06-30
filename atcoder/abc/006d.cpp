#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int INF = 30005;

int main(){
    int N;
    cin >> N;
    vector<int> c(N);
    rep(i, N){
        cin >> c[i];
    }
    vector<int> a(INF, INF);
    a[0] = -INF;
    int MAX = 0;
    rep(i, N){
        int idx = lower_bound(a.begin(), a.end(), c[i]) - a.begin();
        a[idx] = c[i];
        MAX = max(idx, MAX);
    }

    cout << N-MAX << endl;
    return 0;
}