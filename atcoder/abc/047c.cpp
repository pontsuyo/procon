#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size()-1; i++){
        if(s[i]!=s[i+1]) cnt++;
    }
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}