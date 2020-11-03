#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    string s;
    cin >> s;

    map<int, int> m;

    rep(i, s.size()){
        m[(int)(s[i]-'0')]++;
    }

    if(s.size()>=4){
        for (int i = 13; i *8 < 1000; i++){
            map<int, int> mt;
            int ii = i*8;
            rep(j, 3){
                mt[ii%10]++;
                ii /= 10;
            }

            bool ok = true;
            for (auto &&mi : mt){
                if(m[mi.first] < mi.second) ok = false;
            }

            if(ok){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }else{
        for (int i = 1; i *8 < 1000; i++){
            map<int, int> mt;
            int ii = i*8;
            rep(j, s.size()){
                mt[ii%10]++;
                ii /= 10;
            }

            bool ok = true;
            for (auto &&mi : mt){
                if(m[mi.first] < mi.second) ok = false;
            }

            if(ok){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;
    // printf("%d\n", N);
    return 0;
}