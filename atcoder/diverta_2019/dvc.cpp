#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    string s[N];
    rep(i, N){
        cin >> s[i];
    }

    int cnt = 0;
    rep(i, N){
        rep(j, s[i].size()-1){
            if(s[i].substr(j, 2)=="AB"){
                cnt++;
            }
        }
    }
    
    vector <int> a, b, c;
    rep(i, N){
        if(s[i][s[i].size()-1]=='A'){
            a.emplace_back(i);
        }
        if(s[i][0]=='B'){
            b.emplace_back(i);
        }
    }
    rep(i, a.size()){
        rep(j, b.size()){
            if(a[i]==b[j]){
                c.emplace_back(a[i]);
            }
        }
    }
    int comb;
    int a_ = a.size(), b_ = b.size(), c_ = c.size();
    a_ -=c_;
    b_ -=c_;

    if(c_>=1){
        comb = c_-1;
        if(a_>=1){
            comb++;
            a_--;
        }
        if(b_>=1){
            comb++;
            b_--;
        }
        comb += min(a_, b_);
    }else{
        comb = min(a_, b_);
    }
    cout << cnt+comb << endl;
    return 0;
}