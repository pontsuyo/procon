#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int a[6];
int p[4];

bool nibeki(int x){
    while(x%2==0){
        x /=2;
    }
    if(x==1){
        return true;
    }else{
        return false;
    }
}


void ume(int k, int num){
    if(p[0]%k==0){
        if(p[1]%k==0){
            a[1] = num;
        }else{
            a[0] = num;
        }
    }else{
        if(p[1]%k==0){
            a[2] = num;
        
        }else{
            if(p[2]%k==0){
                if(p[3]%k==0){
                    a[4] = num;
                }else{
                    a[3] = num;
                }
            }else{
                a[5] = num;
            }
        }
    }
    return;
}

int main(){
    rep(i, 6){
        a[i] = 100;
    }
    
    printf("? %d %d\n", 1, 2);
    fflush(stdout);
    cin >> p[0];

    printf("? %d %d\n", 2, 3);
    fflush(stdout);
    cin >> p[1];

    printf("? %d %d\n", 4, 5);
    fflush(stdout);
    cin >> p[2];

    printf("? %d %d\n", 5, 6);
    fflush(stdout);
    cin >> p[3];

    // p[0] = 4*15;
    // p[1] = 42*15;
    // p[2] = 23*16;
    // p[3] = 16*8;

    ume(5, 15);
    ume(23, 23);
    ume(7, 42);

    rep(t, 2){
        rep(i, 2){
            rep(j, 2){
                if(a[i*3+j]==100){
                    if(a[i*3+j+1]!=100){
                        a[i*3+j] = p[i*2+j]/a[i*3+j+1];
                    }
                }
            }
            for(int j=2;j>0;j--){
                if(a[i*3+j]==100){
                    if(a[i*3+j-1]!=100){
                        a[i*3+j] = p[i*2+j-1]/a[i*3+j-1];
                    }
                }
            }
        }
    }
    rep(i, 6){
        if(a[i]==100){
            int m;
            if(a[0]==100){
                m = 0;
            }else{
                m = 1;
            }
            
            int s = 2*m;
            int t = 2*m+1;  
            int tmp = p[s]*p[t];
            int cnt = 0;
            while(tmp%2==0){
                tmp /= 2;
                cnt++;
            }
            a[3*m+1] = (int)pow(2, cnt-9);
            a[3*m] = p[s]/a[3*m+1];
            a[3*m+2] = p[t]/a[3*m+1];
            break;
        }
    }

    printf("! %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    fflush(stdout);
    return 0;
}