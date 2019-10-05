#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    string a;
    cin >> a;
    if(a.size()>1){
        cout << a.substr(0, a.size()-1) << endl;
    }else if(a=="a"){
        cout << -1 << endl;
    }else{
        cout << (char) (a[0]-1) << endl;
    }
    return 0;
}