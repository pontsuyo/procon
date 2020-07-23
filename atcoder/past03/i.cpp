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
    ll n, q;
    cin >> n >> q;

    ll row[n], col[n];
    rep(i, n){
        row[i] = i;
        col[i] = i;
    }

    int tnc_cnt= 0;
    rep(qi, q){
        int q_;
        cin >> q_;
        
        int a, b;
        if(q_==1){
            cin >> a >> b;
            --a;--b;
            if(tnc_cnt%2==0){
                int tmp = row[a];
                row[a] = row[b];
                row[b] = tmp;
            }else{
                int tmp = col[a];
                col[a] = col[b];
                col[b] = tmp;
            }
        }else if(q_==2){
            cin >> a >> b;
            --a;--b;
            if(tnc_cnt%2==0){
                int tmp = col[a];
                col[a] = col[b];
                col[b] = tmp;
            }else{
                int tmp = row[a];
                row[a] = row[b];
                row[b] = tmp;
            }
        }else if(q_==3){
            tnc_cnt++;
        }else{
            cin >> a >> b;
            --a;--b;
            if(tnc_cnt%2==0){
                // printf("row[a]: %d  col[b]: %d\n", row[a], col[b]);
                cout << n * row[a] + col[b] << endl;
            }else{
                // printf("row[b]: %d  col[a]: %d\n", row[b], col[a]);
                cout << n * row[b] + col[a] << endl;
            }
        }

        // if(q_!=4){
        //     rep(i, n){
        //         cout << row[i] << " ";
        //     }
        //     cout << endl;

        //     rep(i, n){
        //         cout << col[i] << " ";
        //     }
        //     cout << endl;

        //     rep(i, n){
        //         rep(j, n){
        //             cout << n * row[i] + col[j] << " ";
        //         }
        //         cout << endl;
        //     }
        // }


    }
    // printf("%d\n", N);
    return 0;
}