// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define rep(i,n) for(int i=0;i<n;i++)

// int main(){
//     int n;
//     cin >> n;
//     vector<int> c(n,0);
//     vector<int> s(n,0);
//     vector<int> f(n,0);

    
//     rep(i, n-1){
//         int m;
//         int tmp;
//         for(int j=i;j<n-1;j++){
//             int ttmp;
//             tmp = s[j]+c[j];
            
//             ttmp = tmp % f[j+1];
//             if(ttmp>0){
//                 tmp = tmp +f[j+1] - ttmp;
//             }

//             m = max(tmp, s[j+1]);

//         }
            
//         }
//     }
//     return 0;
// }