#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;

    vector<int> a;
    a.emplace_back(1);
    for(int i=1;i<=100;i++){
        if(pow(6, i)<=n) a.emplace_back((int) pow(6, i));
        else break;
    }
    for(int i=1;i<=100;i++){
        if(pow(9, i)<=n) a.emplace_back((int) pow(9, i));
        else break;
    }
    sort(a.begin(), a.end(), greater<int>());

    rep(i, a.size()){
        cout << a[i] << endl;
    }
    int cnt = 0;
    for(int i=0;i<a.size();i++){
        if(n<36) break;
        int tmp = n/a[i];
        cnt += tmp;
        n -= tmp * a[i];
        cout << a[i] << " " << tmp << endl;
    }

    


    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}