#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    int k;
    vector <int> a(n);

    rep(i, m){
        cin >> k;
        rep(j, k){
            int s;
            cin >> s;
            s--;
            a[s] |= 1<<
            
        }
    }
    int p[m];

    rep(i, m){
        cin >> p[i];
    }

    int cnt = 0;
    rep(i, (int)pow(2,n)){
        int aa = i;
        int a[n];
        rep(j, n){
            if(aa%2==1){
                a[j]=1;
            }else{
                a[j]=0;
            }
            aa /= 2;
        }
        bool f = true;
        rep(j, m){
            int sum = 0;
            rep(l, k[j]){
                sum += a[s[j][l]-1];
            }
            // printf("%d %d\n", j, sum);
            if(sum%2 != p[j]){
                f = false;
            }
        }

        if(f){
            // printf("%d\n", i);
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}