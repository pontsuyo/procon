#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    char b;
    cin >> b;
    if(b=='A'){
        cout << 'T' << endl;
    }else if(b=='T'){
        cout << 'A' << endl;
    }else if(b=='G'){
        cout << 'C' << endl;
    }else if(b=='C'){
        cout << 'G' << endl;
    }
    return 0;
}