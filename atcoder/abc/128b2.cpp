#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    vector <tuple<string, int, int>> a;
    string s[n];
    int p[n];
    rep(i, n){
        cin >> s[i] >> p[i];
    }
    rep(i, n){
        p[i] = -p[i];
    }
    rep(i, n){
        a.emplace_back(tie(s[i], p[i], i));
    }

    sort(a.begin(), a.end());
    rep(i, n){
        // cout << get<2>(a[i]) + 1 << endl;

        string s_;
        int p_;
        int id_;
        tie(s_, p_, id_) = a[i];
        cout << id_+1 << endl;
    }

    return 0;
}