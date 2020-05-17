#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int t, a, b;
    cin >> t >> a >> b;
    rep(ti, t){
        int x, y;
        string s;
        bool fin = false;

        bool inok = false;
        rep(i, 3){
            if(inok) break;
            rep(j, 3){
                x = -1e9/2 + i * 1e9/2;
                y = -1e9/2 + j * 1e9/2;
                printf("%d %d\n", x, y);
                fflush(stdout);
                cin >> s;
                
                if(s=="CENTER"){
                    fin = true;
                    inok = true;
                    break;
                }
                if(s=="HIT"){
                    inok = true;
                    break;
                }
                if(s=="MISS") continue;
            }
        }
        if(fin) continue;
        // printf("lx\n");
        int lx = -1e9;
        int tmpx = x;
        while(tmpx-lx>1){
            int nx = (lx+tmpx)/2;
            printf("%d %d\n", nx, y);
            fflush(stdout);
            cin >> s;
            if(s=="CENTER"){
                fin = true;
                break;
            }
            if(s=="HIT"){
                tmpx = nx;
            }
            if(s=="MISS"){
                lx = nx;
            }
        }
        if(fin) continue;
        int x1 = tmpx;


        int rx = 1e9;
        tmpx = x;
        while(rx-tmpx>1){
            int nx = (rx+tmpx)/2;
            printf("%d %d\n", nx, y);
            fflush(stdout);
            cin >> s;
            if(s=="CENTER"){
                fin = true;
                break;
            }
            if(s=="HIT"){
                tmpx = nx;
            }
            if(s=="MISS"){
                rx = nx;
            }
        }
        if(fin) continue;
        int x2 = tmpx;

        int cx = (x1+x2)/2;

        int ly = -1e9;
        int tmpy = y;
        while(tmpy-ly>1){
            int ny = (ly+tmpy)/2;
            printf("%d %d\n", cx, ny);
            fflush(stdout);
            cin >> s;
            if(s=="CENTER"){
                fin = true;
                break;
            }
            if(s=="HIT"){
                tmpy = ny;
            }
            if(s=="MISS"){
                ly = ny;
            }
        }
        if(fin) continue;
        int y1 = tmpy;


        int ry = 1e9;
        tmpy = y;
        while(ry-tmpy>1){
            int ny = (ry+tmpy)/2;
            printf("%d %d\n", cx, ny);
            fflush(stdout);
            cin >> s;
            if(s=="CENTER"){
                fin = true;
                break;
            }
            if(s=="HIT"){
                tmpy = ny;
            }
            if(s=="MISS"){
                ry = ny;
            }
        }
        if(fin) continue;
        int y2 = tmpy;

        int cy = (y1+y2)/2;

    
        rep(i, 10){
            if(fin) break;
            rep(j, 10){            
                printf("%d %d\n", cx-5+i, cy-5+j);
                fflush(stdout);
                cin >> s;
                if(s=="CENTER"){
                    fin = true;
                    break;
                }
            }
        }
    }
    return 0;
}