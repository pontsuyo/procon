#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    string s[n];
    int p[n];
    rep(i, n){
        cin >> s[i] >> p[i];
    }
    rep(i, n){
        p[i] = 100 - p[i];
    }
    vector <pair <string, int>> v, v_;

    rep(i, n){
        v.emplace_back(make_pair(s[i], p[i]));
    }
    v_ = v;
    sort(v.begin(), v.end());
    rep(i, n){
        rep(j,n){
            if(v[i].first==v_[j].first && v[i].second == v_[j].second){
                printf("%d\n", j+1);
            }
        }
    }
      return 0;
}