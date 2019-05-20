#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a;
    cin >> a;
    int l = a/100;
    int r = a%100;

    if(1<=l && l<=12){
        if(1<= r && r<=12){
            printf("AMBIGUOUS\n");
        }else{
            printf("MMYY\n");
        }
    }else{
        if(1<= r && r<=12){
            printf("YYMM\n");
        }else{
            printf("NA\n");
        }
    }
    return 0;
}