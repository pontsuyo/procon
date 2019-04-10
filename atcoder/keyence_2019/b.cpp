#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    string s; cin >> s;
    string k = "keyence";
    
    int cnt=0;
    int flag=0;
    vector <int> v;
    string ktmp;

    if(s.substr(s.size()-k.size())==k){
        cout << "YES" << endl;
        return 0;
    }

    if(s.substr(0, k.size())==k){
        cout << "YES" << endl;
        return 0;
    }

    rep(i, s.size()){
        if(s[i]==k[cnt]){
            cnt++;
        }else{
            // v.emplace_back(i);
            ktmp = k.substr(cnt);
            break;
        }
    }

    if(s.substr(s.size()-ktmp.size())==ktmp){
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}