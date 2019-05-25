#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

// int main(){
//     int n, m;
//     cin >> n >> m;
//     int a[n];
//     rep(i, n){
//         cin >> a[i];
//     }
//     vector <pair <int, int>> p(m);
//     rep(i, m){
//         cin >> p[i].second;
//         cin >> p[i].first;
//     }

//     sort(a, a+n);
//     sort(p.begin(), p.end(), greater<pair<int, int>>());

//     int idx = 0;
//     rep(i, n){
//         if(a[i]<p[idx].first){
//             a[i] = p[idx].first;
//             p[idx].second--;
//         }else{
//             break;
//         }

//         if(p[idx].second==0){
//             idx++;
//         }
//         if(idx>m-1){
//             break;
//         }
//     }
//     ll sum = 0;
//     rep(i, n){    
//         sum += (ll) a[i];
//     }
//     printf("%lld\n", sum);
//     return 0;
// }

int main(){
    int N, M;
    cin >> N >> M;
    int A[N];
    rep(i, N){
        cin >> A[i];
    }
    int B[M], C[M];
    rep(i, M){
        cin >> B[i] >> C[i];
    }

    priority_queue <P> q;
    rep(i, N){
        q.push(P(A[i], 1));
    }
    rep(i, M){
        q.push(P(C[i], B[i]));
    }
    ll ans = 0;
    rep(i, N){
        auto p = q.top();
        q.pop();
        ans += p.first;
        if(p.second > 1){
            p.second--;
            q.push(p);
        }
    }
    printf("%lld\n", ans);
    return 0;
}