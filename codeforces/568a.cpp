#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int a[3];
    int d;
    cin >> a[0] >> a[1] >> a[2] >> d;

    sort(a, a+3);
    // rep(i, 3){
    //     cout << a[i] << endl;
    // }
    printf("%d\n", max(d-(a[2]-a[1]), 0) + max(d-(a[1]-a[0]), 0));
    return 0;
}