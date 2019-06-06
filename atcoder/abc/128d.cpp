#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> v;
    rep(i, N){
        int tmp;
        cin >> tmp;
        v.emplace_back(tmp);
    }

    int ans = 0;
    for(int l = 0;l<=K;l++){
        for(int r=0;r<=K-l;r++){
            if(l+r>N) continue;
            int d = K-l-r;
            int now = 0;
            vector<int> s;
            for(int i=0;i<l;i++){
                now += v[i];
                s.push_back(v[i]);
            }
            for(int i=N-r;i<N;i++){
                now += v[i];
                s.push_back(v[i]);
            }

            sort(s.begin(), s.end());
            rep(i, d){
                if(i >= s.size()) break;
                if(s[i] > 0) break;
                now -= s[i];
            }
            ans = max(ans, now);
        }
    }
    printf("%d\n", ans);
    return 0;
}