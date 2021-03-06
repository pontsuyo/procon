#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N (int)1e5

int N, K;
string S;
vector<pair<int, char>> a;

void solve(){
    a.emplace_back(make_pair(0, S[0]));
    for(int i=1;i<N;i++) {
        if(S[i] != S[i-1]){
            a.emplace_back(make_pair(i, S[i]));
        }
    }
    a.emplace_back(make_pair(N, S[N-1]));

    while(a.size()<3*K+1){
        a.emplace_back(make_pair(N, S[N-1]));
    }

    int MAX = 0;
    rep(i, max(a.size()-2*K, K)){
        if(a[i].second=='0'){
            MAX = max(MAX, a[i+2*K].first - a[i].first);
        }else if(a[i].second=='1'){
            MAX = max(MAX, a[i+2*K+1].first - a[i].first);
        }
    }
    printf("%d\n", MAX);
}

int main(){
    cin >> N >> K;
    cin >> S;    
    solve();
    // printf("%d\n", a.size());
    // rep(i, a.size()){
    //     printf("%d\n", a[i].first);
    // }
    return 0;
}