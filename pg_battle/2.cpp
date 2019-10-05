#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    string s;
    cin >> s;

    string atcoder = "atcoder";

    
    if(s=="AtCoder"){
        cout << "Yes" << endl;
        return 0;
    }

    bool flag = true;
    rep(i, atcoder.size()){
        // if(!(s[i]== atcoder[i] || s[i]==atcoder[i]-'a'+'A')){
        if(tolower(s[i])!=atcoder[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Maybe" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }
    return 0;
}