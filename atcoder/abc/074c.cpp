#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    double maxr = 0;
    int all, sug;
    for (int ai = 0; ai <= f/(100*a); ai++){
        for (int bi = 0; bi <= f/(100*b); bi++){
            for (int ci = 0; ci <= f/c; ci++){
                for (int di = 0; di <= f/d; di++){
                    // cout << 100*ai*a+100*bi*b+ci*c+di*d << endl;
                    if(100*ai*a+100*bi*b+ci*c+di*d <= f && (ai*a+bi*b)*e >= ci*c+di*d){
                        // cout << ai << endl;
                        int all_ = 100*(ai*a+bi*b) + ci*c + di*d;
                        if(all_==0) continue;
                        int sug_ = ci*c + di*d;
                        double r = (double) 100*sug_/ (double) all_;
                        if(r>maxr){
                            maxr = r;
                            all = all_;
                            sug = sug_;
                        }
                    }

                }
            }
        }
    }
    
    cout << all << " " << sug << endl;
    // printf("%d\n", N);
    return 0;
}