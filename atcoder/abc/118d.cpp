// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef pair<int, int> P;
// #define rep(i,n) for(int i=0;i<n;++i)
// #define MOD 1000000007

// int main(){
//     int n, m;
//     cin >> n >> m;
//     int cnt[9] = {2,5,5,4,5,6,3,7,6};
//     vector<P> a, b;

//     int tmp;
//     rep(i, m){
//         cin >> tmp;
//         a.emplace_back(P(tmp, cnt[tmp-1]));
//         b.emplace_back(P(cnt[tmp-1], tmp));
//     }
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
    
//     int nn;
//     rep(i, a.size()){
//         nn = n;
//         cout << a[i].first;
//         nn -= a[i].second;

//         int mincnt = b[0].first;
//         int minnum = b[0].second;

//         if()
//     }
//     cout << n << endl;
//     // printf("%d\n", N);
//     return 0;
// }