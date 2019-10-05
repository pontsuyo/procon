#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    string ss[3] = {"Sunny", "Cloudy", "Rainy"};
    string s;
    cin >> s;
    rep(i, 3){
        if(s==ss[i]){
            cout << ss[(i+1)%3] << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}