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
    map<char, int> mp;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        mp[s[i]]++;
        if (s[i] == '+'){
            if (!mp['0']>0){
                cnt++;
            }else{
                mp['0'] = 0;
            }
        }
    }
    if (!mp['0']>0){
        cnt++;
        mp['0'] = 0;
    }
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}