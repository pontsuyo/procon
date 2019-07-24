#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string w;
    cin >> w;
    map<char, int> m;
    rep(i, w.size()){
        m[w[i]]++;
    }
    for(auto i=m.begin(); i!=m.end(); i++){
        int tmp = i ->second;
        if(tmp%2==1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}