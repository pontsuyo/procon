#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    string s;
    cin >> n >> s;

    if(n%2==0){
        cout << -1 << endl;
        return 0;
    }

    int cnt = (n-1)/2;
    
    char abc[3] = {'a', 'b', 'c'};

    rep(i, n){
        // printf("%d\n", (-cnt+i+1)%3);
        if(s[i]!=abc[((-cnt+i+1)%3+3)%3]){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << cnt << endl;
    return 0;
}