#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int)(1e9 + 7)
#define INF (int)1e9
#define LLINF (ll)1e18

ll mpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main()
{
    int k;
    string s, t;
    cin >> k >> s >> t;

    map<int, int> m;
    for (int i = 1; i <= 9; i++)
    {
        m[i] = k;
    }

    rep(i, 4)
    {
        m[s[i] - '0'] -= 1;
        m[t[i] - '0'] -= 1;
    }

    vector<int> vt(10, 0), va(10, 0);

// ここまでok

    rep(i, s.size()-1){
        vt[(int)(s[i]-'0')]++;
        va[(int)(t[i]-'0')]++;
    }

    // printf("%20.20lf\n", 0.4444444444444444);
    // return 0;

    ld ans = 0.0f;
    for (int ti = 1; ti <= 9; ti++){
        if(m[ti]==0) continue;

        map<int, int> mtmp = m;
        
        ld pt = (ld) m[ti]/ (ld) (9*k-8);
        // printf("%d %20.20lf\n", ti, pt);
        vector<int> vt_ = vt;
        vt_[ti]++;

        mtmp[ti]--;

        int st = 0;
        for (int ti = 1; ti <= 9; ti++){
            st += ti * mpow(10, vt_[ti]);
        }

        for (int ai = 1; ai <= 9; ai++){
            if(mtmp[ai]==0) continue;            

            ld pa = (ld) mtmp[ai]/ (ld) (9*k-9);

            vector<int> va_ = va;
            va_[ai]++;

            int sa = 0;
            for (int ai = 1; ai <= 9; ai++){
                sa += ai * mpow(10, va_[ai]);
            }

            if(st>sa){
                ans += pt*pa;
            }
        }
    }

    printf("%20.20lf\n", ans);
    return 0;
}