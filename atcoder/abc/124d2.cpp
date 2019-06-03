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
    int n = a.size();
    a.emplace_back(make_pair(N, '1'));
    a.emplace_back(make_pair(N, '1'));

    int l, r;
    l = 0;

    if(S[0]=='0'){
        r = min(2*K-1, n);
    }else{
        r = min(2*K, n);
    }
    
    int MAX = 0;
    int i= 0;
    while(true){
        if(a[l].first >= n){
            break;
        }
        MAX = max(MAX, a[r+1].first - a[l].first);

        if(a[l].second=='0'){
            l++;
            r = min(r+2, n);
        }else{
            l++;
        }
    }
    printf("%d\n",MAX);
}

int main(){
    cin >> N >> K;
    cin >> S;    
    solve();
    return 0;
}