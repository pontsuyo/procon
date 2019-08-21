#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    string s;
    cin >> s;
    string pi[7] = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};

    rep(i, s.size()){
        if (s.substr(i, 7) == "WWBWBWW"){
            cout << pi[(6-i/2)%7] << endl;
            return 0;
        }
        if (s.substr(i, 9) == "WWBWBWBWW"){
            cout << pi[(2-i/2)%7] << endl;
            return 0;
        }
    }
}