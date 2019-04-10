#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    while(true){
        int d, na, nb, nc;
        if(scanf("%d %d %d %d", &d, &na, &nb, &nc)==EOF) break;
        vector<int> a(na), b(nb), c(nc);
        rep(i, na){
            scanf("%d", &a[i]);
        }
        rep(i, nb){
            scanf("%d", &b[i]);
        }
        rep(i, nc){
            scanf("%d", &c[i]);
        }

        ll sum = 0;
        rep(i, na){
            auto bl = lower_bound(b.begin(), b.end(), a[i]);
            auto bu = upper_bound(b.begin(), b.end(), a[i]+d);
            auto cl = lower_bound(c.begin(), c.end(), a[i]);
            auto cu = upper_bound(c.begin(), c.end(), a[i]+d);

            sum += (ll)(bu-bl) * (cu-cl);
        }

        rep(i, nb){
            auto bl = lower_bound(a.begin(), a.end(), b[i]+1);
            auto bu = upper_bound(a.begin(), a.end(), b[i]+d);
            auto cl = lower_bound(c.begin(), c.end(), b[i]);
            auto cu = upper_bound(c.begin(), c.end(), b[i]+d);

        sum += (ll)(bu-bl) * (cu-cl);
        }

        rep(i, nc){
            auto bl = lower_bound(a.begin(), a.end(), c[i]+1);
            auto bu = upper_bound(a.begin(), a.end(), c[i]+d);
            auto cl = lower_bound(b.begin(), b.end(), c[i]+1);
            auto cu = upper_bound(b.begin(), b.end(), c[i]+d);

        sum += (ll)(bu-bl) * (cu-cl);
        }
    cout << sum << endl;
    }
    return 0;
}