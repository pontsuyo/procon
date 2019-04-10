#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

const int MAX_N = 100000;
int N, S[MAX_N], T[MAX_N];
pair<int, int> itv[MAX_N];

void solve(){
    rep(i, N){
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv+N);

    int ans=0, t=0;
    rep(i,N){
        if(t<itv[i].second){
            ans++;
            t = itv[i].first;
        }
    }
    printf("%d\n", ans);

}

int main(){
    cin >> N;
    rep(i, N){
        cin >> S[i];
    }
    rep(i, N){
        cin >>T[i];
    }
    solve();
    return 0;
}