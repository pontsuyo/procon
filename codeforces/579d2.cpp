#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    string s, t;
    cin >> s >> t;

    int tmp, MAX = 0;
    for (int i = 0; i < s.size()-t.size()+1; i++){
        bool flag = true;
        rep(j, t.size()){
            if(t[j]!=s[i+j]){
                flag = false;
                break;
            }
        }

        if(flag){
            int tt = s.size()-t.size()-i;
            tmp = max(i, tt);
        }
        MAX = max(tmp, MAX);
    }

    cout << MAX << endl;
    // printf("%d\n", N);
    return 0;
}