#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;

    vector<int> a;
    a.emplace_back(1);
    for (int i = 1; (int) pow(6, i) <= 100000; i++) a.emplace_back((int) pow(6, i));
    for (int i = 1; (int) pow(9, i) <= 100000; i++) a.emplace_back((int) pow(9, i));
    
    sort(a.begin(), a.end(), greater<>());

    int ans = 0;
    for(auto p:a){
        while(n/p >0){
            ans++;
            n -= p;
            // printf("%d %d %d\n", n, p, ans);

            if(n>=12 && n<=14){
                ans += n-10;
                cout << ans << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}