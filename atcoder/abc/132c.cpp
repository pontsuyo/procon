#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    vector<int> d(N);
    rep(i, N){
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    printf("%d\n", d[N/2]-d[N/2-1]);
    return 0;
}