#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int MAX = a*b*c;
    MAX = max(MAX, a*b+c);
    MAX = max(MAX, a+b*c);
    MAX = max(MAX, a+b+c);

    cout << MAX << endl;
    // printf("%d\n", N);
    return 0;
}