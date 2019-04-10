#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int l[n];
    rep(i, n){
        cin >> l[i];
    }
    
    int g[n] = {0};
    int mp = 0;
    int at=0, bt=0, ct=0;
    int MIN = 3000;
    rep(i, pow(4, n)){
        mp = 0;
        at = 0;bt = 0; ct = 0;
        int ii = i;
        int j=0;
        while(j<n){
            g[j] = ii%4;
            ii = ii/4;
            j+=1;
        }
        int c0=0, c1=0, c2=0, c3=0;
        rep(k, n){
            if(g[k]==0){
                c0++;
            }else if(g[k]==1){
                c1++;
            }else if(g[k]==2){
                c2++;
            }else{
                c3++;
            }
        }
        if(c0==0 || c1==0 || c2==0) continue;

        rep(k, n){
            if(g[k]==0){
                at += l[k];
                mp += 10;
            }else if(g[k]==1){
                bt += l[k];
                mp += 10;
            }else if(g[k]==2){
                ct += l[k];
                mp += 10;
            }
        }
        mp -= 30;
        mp = mp + abs(a-at) + abs(b-bt) + abs(c-ct);
        
        MIN = min(MIN, mp);
    }

    cout << MIN << endl;
    return 0;
}