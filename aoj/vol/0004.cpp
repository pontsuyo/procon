#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    double a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d >> e >> f){
        double delta = a*e-b*d;
        double x = round((e*c-b*f)/delta * 1000)/1000;
        double y = round((-d*c+a*f)/delta*1000)/1000;
        if(x==0) x = 0.000;
        if(y==0) y = 0.000;
        printf("%.3lf %.3lf\n", x, y);    
    }
    return 0;
}