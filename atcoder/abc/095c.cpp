// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define rep(i,n) for(ll i=0;i<n;i++)

// int main(){
//     ll a, b, c, x, y;
//     cin >> a >> b >> c >> x >> y;

//     ll price;
//     ll MIN = 1e10;
//     rep(i, 1e5){
//         price = i*c*(ll)2 + max((ll)0, x-i)*a + max((ll)0,y-i)*b;
//         MIN = min(MIN, price);
//     }
//     cout << MIN << endl;
//     return 0;
// }