#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> S, T;
    int tmp;
    rep(i, N){
        cin >> tmp;
        S.emplace_back(tmp);
    }
    rep(i, M){
        cin >> tmp;
        T.emplace_back(tmp);
    }

    vector<vector<vector<int>>> dp(N+1);

    rep(i, N){
        rep(j, M){
            if(S[i]==T[j]){
                
            }
        }
    }

    printf("%d\n", N);
    return 0;
}