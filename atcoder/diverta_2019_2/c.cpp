#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    vector <int> A;
    vector<int> n;
    vector<int> p;
    rep(i, N){
        int tmp; cin >> tmp;
        if(tmp>0){
            p.emplace_back(tmp);
        }else{
            n.emplace_back(tmp);
        }
        A.emplace_back(tmp);
    }
    
    vector <pair<int, int>> P;

    int ans = 0;

    if(n.size()>1 && p.size()>0){
        // printf("ok");
        sort(A.begin(), A.end());
        int tt = A[N-1];
        A[N-1] = A[0];
        A[0] = tt;

        rep(i, N-2){
            // if(A[i]<A[i+1]){
            int ma = max(A[i], A[i+1]);
            int mi = min(A[i], A[i+1]);
            if(A[i+2]>0){
                P.emplace_back(make_pair(mi, ma));
                A[i+1] = mi - ma;
            }else{
                P.emplace_back(make_pair(ma, mi));
                A[i+1] = ma - mi;
            }
        }
        P.emplace_back(make_pair(max(A[N-1], A[N-2]), min(A[N-1], A[N-2])));
        A[N-1] = abs(A[N-1] - A[N-2]);
    }else if(p.size()>0){
        sort(A.begin(), A.end());
        rep(i, N-2){
            // if(A[i]<A[i+1]){
            int ma = max(A[i], A[i+1]);
            int mi = min(A[i], A[i+1]);
            if(A[i+2]>0){
                P.emplace_back(make_pair(mi, ma));
                A[i+1] = mi - ma;
            }else{
                P.emplace_back(make_pair(ma, mi));
                A[i+1] = ma - mi;
            }
        }
        P.emplace_back(make_pair(max(A[N-1], A[N-2]), min(A[N-1], A[N-2])));
        A[N-1] = abs(A[N-1] - A[N-2]);
    }else if(n.size()>0){
        sort(A.begin(), A.end(), greater<int>());
        rep(i, N-2){
            // if(A[i]<A[i+1]){
            int ma = max(A[i], A[i+1]);
            int mi = min(A[i], A[i+1]);
            if(A[i+2]>0){
                P.emplace_back(make_pair(mi, ma));
                A[i+1] = mi - ma;
            }else{
                P.emplace_back(make_pair(ma, mi));
                A[i+1] = ma - mi;
            }
        }
        P.emplace_back(make_pair(max(A[N-1], A[N-2]), min(A[N-1], A[N-2])));
        A[N-1] = abs(A[N-1] - A[N-2]);
    }

    printf("%d\n", A[N-1]);
    rep(i, N-1){
        printf("%d %d\n", P[i].first, P[i].second);
    }
    return 0;
}