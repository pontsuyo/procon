#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    int a[4];
    rep(i, 4){
        a[i] = N/(int)pow(10, 3-i) %10;
    }
    int sum;
    rep(i, 1<<3){
        sum =a[0];
        vector<char> c;
        rep(j, 3){
            if((i>>(2-j))%2==1){
                c.emplace_back('+');
                sum += a[j+1];
            }else{
                c.emplace_back('-');
                sum -= a[j+1];
            }
        }

        if(sum==7){
            printf("%d", a[0]);
            rep(j, 3){
                printf("%c%d", c[j], a[j+1]);
            }
            printf("=7\n");
            return 0;
        }
        
    }
}