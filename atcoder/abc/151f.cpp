#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

double di(pair<double, double> a, pair<double, double> b) {
    return sqrt((a.first-b.first) * (a.first-b.first) + (a.second-b.second) * (a.second-b.second));
}

double oRadius(pair<double, double> a, pair<double, double> b, pair<double, double> c) {

	//辺
	double eAB = di(b, a);
	double eBC = di(c, b);
	double eCA = di(a, c);

	//角度(余弦定理)
	double aCAB = acos((eCA*eCA + eAB*eAB - eBC*eBC) / (2 * eCA*eAB));

	//外接円の半径(正弦定理)
	double R = 0.5*eBC / sin(aCAB);

	return(R);
}

int main(){
    int n;
    cin >> n;
    pair<double, double> p[n]; 

    double tmpr = 0;
    
    double x, y;
    rep(i, n){
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }

    rep(ii, n){
        p[3] = p[ii];
        if(ii>2){
            rep(i, 4){
                rep(j, 4){
                    rep(k, 4){
                        if(i<j && j<k){
                            double d = oRadius(p[i], p[j], p[k]);
                            // printf("%lf\n", d);
                            if(tmpr < d){
                                p[0] = p[i];
                                p[1] = p[j];
                                p[2] = p[k];
                                tmpr = d;
                            }
                            // chmin(tmpr, Circumradius(p[i], p[j], p[k]));
                        }
                    }
                }
            }
        }
    }
    cout << tmpr << endl;
    // printf("%d\n", N);
    return 0;
}