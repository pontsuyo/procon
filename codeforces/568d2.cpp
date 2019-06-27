#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n, 0);
    rep(i, n){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    int d = a[1].first - a[0].first;
    vector<pair<int, int> dind;
    // dind.emplace_back(make_pair(d, a[i].second));

    for(int i=2;2<n;i++){
        int dt = a[i].first - a[i-1].first;
        if(d!=dt){
            dind.emplace_back(make_pair(dt, a[i].second));
        }
    }

    if(dind.size()==0){
        printf("1\n");
    }else if(dind.size()==1){
        if(dind[0].first*2==d && dind[0].second==2)
    }

    printf("%d\n", n);
    return 0;
}