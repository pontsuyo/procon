#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    int n, a, b, c;
    map<char, int>m;
    
    cin >> n >> a >> b >> c;
    m['A'] = a;
    m['B'] = b;
    m['C'] = c;
    
    map<char, vector<int>> q;
    vector<int> va, vb,vc;

    q['A'] = va;
    q['B'] = vb;
    q['C'] = vc;
    // rep(i, 3) q[(char)('A'+i)][n] = 0;

    string ss[n];

    char ans[n];
    // printf("%d\n", n);
    for (int i = n; i >=1; i--)
    {
        // printf("%d\n", i);
        // rep(j, 3) q[(char)('A'+j)][i-1] = q[(char)('A'+j)][i];
        
        string s;
        cin >> s;
        ss[n-i] = s;

        q[s[0]].emplace_back(i);
        q[s[1]].emplace_back(i);
        // // printf("%d\n", i);

    }
    
    // printf("ok\n");
    rep(i, n){
        // printf("%d\n", i);
        string si = ss[i];
        if(m[si[0]]==0 && m[si[1]]==0){
            cout << "No" << endl;
            return 0;
        }else if(m[si[0]] < m[si[1]]){
            ans[i] = si[0];
            m[si[0]]++;
            m[si[1]]--;
        }else if(m[si[0]] > m[si[1]]){
            ans[i] = si[1];
            m[si[0]]--;
            m[si[1]]++;
        }else{
            int q1 = *lower_bound(all(q[si[0]]), i);
            int q2 = *lower_bound(all(q[si[1]]), i);
            
            if(q1 <  q2){
                ans[i] = si[1];
                m[si[0]]--;
                m[si[1]]++;
            }else{
                ans[i] = si[0];
                m[si[0]]++;
                m[si[1]]--;
            }
        }
    }

    cout << "Yes" << endl;
    rep(i, n) cout << ans[i] << endl;
    // printf("%d\n", N);
    return 0;
}