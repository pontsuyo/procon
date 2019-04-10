// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define rep(i,n) for(int i=0;i<n;i++)

// int main(){
//     int n, x;
//     cin >> n >> x;
//     int a[n];
//     rep(i, n){
//         cin >> a[i];
//     }
//     sort(a, a+n);
//     int j=0;

//     int sum = 0;
//     for(j;j<n;j++){
//         sum += a[j];
//         if(sum == x){
//             cout << j << endl;
//             return 0;
//         }else if(sum>x){
//             j--;
//             cout << j << endl;
//             return 0;
//         }
//     }
//     j--;
//     cout << j << endl;
//     return 0;
// }