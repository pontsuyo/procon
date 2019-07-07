#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int D, G;
    cin >> D >> G;
    vector <int> p(D);
    vector <int> c(D);
    rep(i, D){
        cin >> p[i] >> c[i];
    }

    int MIN = 10000; 
    rep(i, 1<<D){
        int S = G;
        int cnt = 0;
        rep(j, D){
            if(i>>j & 1){
                S -= c[j] + p[j]*(j+1)*100;
                cnt += p[j];
            }
        }
        // cout << i << " " << cnt << endl;
        if(S>0){
            for(int j=D-1;j>=0;j--){
                if(i>>j & 1) continue;
                if(S > (p[j]-1)*(j+1)*100){
                    S -= (p[j]-1)*(j+1)*100;
                    cnt += p[j]-1;
                }else{
                    cnt += ceil(S/((j+1)*100));
                    S -= ceil(S/((j+1)*100)) * (j+1)*100;

                    // cnt += (S+(j+1)*100-1)/((j+1)*100);
                    break;
                }
            }
        }
        if(S>0) continue;
        // cout << cnt << endl;
        MIN = min(MIN, cnt);
    }
    printf("%d\n", MIN);
    return 0;
}