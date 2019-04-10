// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define rep(i,n) for(ll i=0;i<n;i++)

// int main(){
//     int d, g;
//     cin >> d >> g;
//     vector <int> p(d,0);
//     vector <int> c(d,0);
//     vector <int> pp(d,0);

//     rep(i,d){
//         cin >> p[i] >> c[i];
//     }

//     pp = p;
//     int MIN = 1001;
//     int SUM;
//     int solve;
//     int j;
//     rep(i, pow(2,d)){
        
//         j=i;
//         SUM = 0;
//         solve = 0;
        
//         rep(cnt, d){
//             if(j%2==1){
//                 SUM += p[cnt] * (cnt+1) * 100 + c[cnt];
//                 solve += p[cnt];
//                 pp[cnt] = 0;
//             }
//             j /= 2;
//         }
        
//         if(SUM < g){
//             for(int i=d-1;i>0;i--){
//                 if(pp[i]>0){
//                     if(g - SUM < pp[i] *(i+1) * 100){
//                         solve += (g-SUM)/((i+1) * 100);
//                         if((g-SUM) % ((i+1) * 100)>0){
//                             solve += 1;
//                         }
//                         break;
//                     }
//                 }
//             }
//         }
//         cout << i << " " << SUM <<" " << solve << endl;

//         if(SUM >= g){
//             MIN = min(MIN, solve);
//         }
//     }
//     cout << MIN << endl;
//     return 0;
// }