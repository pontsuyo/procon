#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int a, b;
    while(cin >> a >> b){
        int s= a+b, cnt = 0;
        while(s>0){
            s /= 10;
            cnt++;
        }
        cout << cnt << endl;
        // printf("%d\n", N);
    
    }
    return 0;
}