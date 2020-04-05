#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int a[3];
    int n= 0;
    rep(i, 3){
        cin >> a[i];
        n += a[i];
    }
    int m[3][3];

    rep(i, 3) rep(j, 3) m[i][j] = INF;

    vector<int> v;
    rep(i, n) v.emplace_back(i);


    int cnt = 0;
    do{
        bool ok = true;     
        // rep(i, a[0]-1){
        //     if(v[i] >= v[i+1]) ok=false;
        // }
        // if(v[0] >= v[a[0]]) ok=false;

        // rep(i, a[1]-1){
        //     if(v[i+a[0]] >= v[i+a[0]+1]) ok=false;
        // }
        // if(v[a[0]] >= v[a[0]+a[1]]) ok=false;

        // rep(i, a[2]-1){
        //     if(v[i+a[0]+a[1]] >= v[i+a[0]+a[1]+1]) ok=false;
        // }

        rep(i, 3){
            rep(j, 2){
                if(a[i] >= j+2){
                    if(i==0) if(v[j] >= v[j+1]) ok=false;
                    if(i==1) if(v[j+a[0]] >= v[j+1+a[0]]) ok=false;
                    if(i==2) if(v[j+a[0]+a[1]] >= v[j+1+a[0]+a[1]]) ok=false;
                }
            }
        }

        rep(i, 2){
            rep(j, 3){
                if(a[i] >= j+1 && a[i+1] >= j+1){
                    if(i==0) if(v[j] >= v[j+a[0]]) ok=false;
                    if(i==1) if(v[j+a[0]] >= v[j+a[0]+a[1]]) ok=false;
                }
            }
        }

        if(ok) cnt++;
        
    }while (next_permutation(v.begin(), v.end()));    


    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}