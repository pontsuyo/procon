#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll H, W;
    cin >> H >> W;
    
    ll Smax, Smin;
    ll MIN = 100100100100;
    for (ll ha = 1; ha < H; ha++)
    {
        ll hb = (H-ha)/2;
        ll hc = H-ha-hb;
        Smax = max(ha, max(hb, hc)) * W;
        Smin = min(ha, min(hb, hc)) * W;
        MIN = min(MIN, Smax-Smin);

        ll wb = W/2;
        ll wc = W-wb;
        Smax = max(ha*W, max(wb, wc)*(H-ha));
        Smin = min(ha*W, min(wb, wc)*(H-ha));
        MIN = min(MIN, Smax-Smin);
    }

    swap(H, W);
    for (ll ha = 1; ha < H; ha++)
    {
        ll hb = (H-ha)/2;
        ll hc = H-ha-hb;
        Smax = max(ha, max(hb, hc)) * W;
        Smin = min(ha, min(hb, hc)) * W;
        MIN = min(MIN, Smax-Smin);

        ll wb = W/2;
        ll wc = W-wb;
        Smax = max(ha*W, max(wb, wc)*(H-ha));
        Smin = min(ha*W, min(wb, wc)*(H-ha));
        MIN = min(MIN, Smax-Smin);
    }

    cout << MIN << endl;
    // printf("%d\n", N);
    return 0;
}