#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    string s;
    cin >> s;
    vector<int>  rlr, lrl;
    rep(i, s.size()-1){
        if(s[i]=='R' && s[i+1]=='L'){
            rlr.emplace_back(i);
        }
        if(s[i]=='L' && s[i+1]=='R'){
            lrl.emplace_back(i);
        }
    }
    lrl.emplace_back(s.size()-1);

    vector<int> num(s.size());
    int j=0;
    rep(i, s.size()){
        if(i>lrl[j]){
            j++;
        }
        // cout << i << " " << j << " " << lrl[j] << " " << rlr[j] << " " << endl;
        if((i-rlr[j])%2==0){
            num[rlr[j]]++;
        }else{
            num[rlr[j]+1]++;
        }
    }
    rep(i, s.size()-1){
        cout << num[i] << " ";
    }
    cout << num[s.size()-1] << endl;
    // printf("%d\n", N);
    return 0;
}