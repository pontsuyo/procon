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
    int n;
    cin >> n;
    string s[5];
    rep(i, 5){
        cin >> s[i];
    }

    string numst[5];
    numst[0] = ".###..#..###.###.#.#.###.###.###.###.###.";
    numst[1] = ".#.#.##....#...#.#.#.#...#.....#.#.#.#.#.";
    numst[2] = ".#.#..#..###.###.###.###.###...#.###.###.";
    numst[3] = ".#.#..#..#.....#...#...#.#.#...#.#.#...#.";
    numst[4] = ".###.###.###.###...#.###.###...#.###.###.";

    char num[10][15];
    rep(ni, 10){
        rep(tate, 5){
            rep(yoko, 3){
                num[ni][tate*3+yoko] = numst[tate][4*ni+yoko+1];
            }
        }
    }

    rep(ni, n){
        rep(candnumi, 10){
            bool ok = true;
            rep(tate, 5) rep(yoko, 3){
                if(num[candnumi][tate*3+yoko] != s[tate][4*ni+yoko+1]) ok = false;
            }
            if(ok){
                cout << candnumi;
                break;
            }
        }        
    }
    
    cout << endl;
    return 0;
}