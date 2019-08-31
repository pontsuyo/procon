#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b, bi(n);
    rep(i, n){
        cin >> a[i];
        int tmp = a[i];
        rep(j, 20){
            if(a[i]>>j ==0){
                bi[i] = j;
            }
        }
    }

    sort(a.begin(), a.end());
    sort(bi.begin(), bi.end());
    vector<int> s(n+1);
    s[0] = 0;
    rep(i, n+1){
        s[i+1] = s[i] + bi[i];
    }

    int MIN = INF, cnt;
    bool flag;
    rep(i, n-k+1) {
        for (int l = 0; l < 20; l++) {
            b = a;
            cnt=l;
            flag = true;
            
            int tmpsum = s[i+k] - s[i];



            for (int j = i+1; j < i+k; j++) {        
                
                
                if(b[j]!=(a[i]>>l)) flag = false;
            }
            if(flag) break;
        }
        MIN = min(MIN, cnt);
    }

    cout << MIN << endl;
    // printf("%d\n", N);
    return 0;
}