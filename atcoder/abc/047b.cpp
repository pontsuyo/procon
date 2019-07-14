#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int w, h, n;
    cin >> w >> h >> n;

    int xl=0, xu=w, yl=0, yu=h;
    
    rep(i, n){
        int x, y, a;
        cin >> x >> y >> a;
        if(a==1){
            xl = max(xl, x);
        }else if(a==2){
            xu = min(xu, x);
        }else if(a==3){
            yl = max(yl, y);
        }else if(a==4){
            yu = min(yu, y);            
        }
    }
    printf("%d\n", max(xu-xl, 0)*max(yu-yl, 0));
    return 0;
}