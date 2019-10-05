#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int w, k, d;
    cin >> w >> k >> d;
    if(k<=d && w-k<=d){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    // printf("%d\n", N);
   return 0;
}