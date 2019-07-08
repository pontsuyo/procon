#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int na = f/(100*a);
    int nb = f/(100*b);
    int nc = f/c;
    int nd = f/d;

    int w = 0;
    int s = 0;
    double r = 0;
    for(int i=0;i<=na;i++){
        for(int j=0;j<=nb;j++){

            for(int k=0;k<=nc;k++){
                for(int l=0;l<=nd;l++){
                    if((a*i+b*j)*e >= c*k+d*l && (a*i+b*j)*100+c*k+d*l<=f && (a*i+b*j)>0){
                        double rtmp = (double)(c*k+d*l)/(100*(a*i+b*j)+c*k+d*l);
                        if(rtmp > r){
                            r = rtmp;
                            w = 100*(a*i+b*j);
                            s = c*k+d*l;
                        }
                    }
                }
            }
        }
    }
    printf("%d %d\n", w+s, s);
    return 0;
}