#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> B(N, 0);
    rep(i, N){
        cin >> A[i] >> B[i];
    }
    vector<pair<int, int>> p;
    rep(i, N){
        p.emplace_back(make_pair(B[i], A[i]));
    }
    sort(p.begin(), p.end());

    ll sum = 0;
    rep(i, N){
        sum += p[i].second;
        if(sum>p[i].first){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}