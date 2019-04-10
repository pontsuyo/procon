#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    // string s;
    // cin >> s;

    // string y = s.substr(0, 4);
    // string m = s.substr(5, 2);
    // string d = s.substr(8, 2);
    // int yy = atoi(y.c_str());
    // int mm = atoi(m.c_str());
    // int dd = atoi(d.c_str());

    int yy, mm, dd;
    char c1, c2;
    cin >> yy >> c1 >> mm >> c2 >> dd;

    // if(yy<2019){
    //     cout << "Heisei" << endl;
    // }else if(yy>2019){
    //     cout << "TBD" << endl;
    // }else{
    //     if(mm<=4){
    //         cout << "Heisei" << endl;
    //     }else{
    //         cout << "TBD" << endl;
    //     }
    // }

    if(mm<=4) cout << "Heisei" << endl;
    else cout << "TBD" << endl;   
    return 0;
}