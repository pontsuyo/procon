#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    double r = pow((double)1/2, 1);
    double sum= 0;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            r = pow((double)1/2, n-1);
        }else{
            r = pow((double)1/2, n-i);
        }
        sum += v[i] * r;
    }
    
    cout << sum << endl;
    // printf("%d\n", N);
    return 0;
}