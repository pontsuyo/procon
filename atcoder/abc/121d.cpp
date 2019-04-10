#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

ll f(ll n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n^1;
    if(n%4==3) return 0;
    assert(false);
}

int main(){
    ll a, b;
    cin >> a >> b;
    if(a==0){
        cout << f(b) << endl;
    }else{
        cout << (f(b)^f(a-1)) << endl;
    }
    return 0;
    
    // ll a, b;
    // cin >> a >> b;
    // ll num = b-a+1;

    // if(a==b){
    //     cout << a << endl;
    //     return 0;
    // }

    // ll out = 0;
    // rep(i, 41){
    //     // cout << out << endl;
    //     // ll tmp1 = num / pow(2, i+1);
    //     // ll rem = num - tmp1 * pow(2, i+1);
        
    //     ll rem = num % (ll)pow(2, i+1);
        
    //     // cout << rem << endl;
    //     if(rem!=0){
    //         ll tmp2 = a / pow(2, i+1);
    //         ll rem2 = a - tmp2 * pow(2, i+1);
    //         int tmp=0;
    //         if(rem2 >= pow(2, i)){
    //             if(rem2+rem-1 <= pow(2, i+1)-1){
    //                 tmp = rem;
    //             }else{
    //                 tmp = (pow(2, i+1)-rem2);
    //             }
    //         }else{
    //             if(rem2+rem-1-pow(2, i)>0){
    //                 tmp = rem2+rem-pow(2, i);
    //             }
    //         }
    //         cout << tmp << endl;
    //         tmp = tmp%2;
    //         out += pow(2, i)*tmp;
    //     }    
    // } 
    // cout << out << endl;
    // return 0;

}