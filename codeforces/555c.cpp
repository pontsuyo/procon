#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)


vector <int> mord;
int n;
vector <int> a;


void dffs(vector <int> ord){
    int l=0, r=n-1;
    vector<int> tmp;
    rep(i,ord.size()){
        if(ord[i]==0){
            tmp.emplace_back(a[l]);
            l++;
        }else{
            tmp.emplace_back(r);
            r--;
        }
    }

    bool flag = true;
    rep(i, tmp.size()){
        if(tmp[i] >= tmp[i-1]){
            flag = false;
        }
    }
    if(flag){
        if(ord.size()>mord.size()){
            mord = ord;
        }
    }
    dffs(ord.emplace_back(0));
    dffs(ord.emplace_back(1));
    return;
}

int main(){
    cin >> n;
    int tmp_;
    rep(i, n){
        cin >> tmp_;
        a.emplace_back(tmp_);
    }
    vector <int> out;
    dffs(out);
    return 0;
}