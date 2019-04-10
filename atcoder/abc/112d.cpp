#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int ans = 1;
    for (int A=1; A*A<=M; A++)
    {
        if (M%A != 0) continue;

        int B = M/A;

        if((long)A*N <= M) ans = max(ans, A);
        if((long)B*N <= M) ans = max(ans, B);
        // if(A*N <= M) ans = max(ans, A);
        // if(B*N <= M) ans = max(ans, B);
    }
    cout << ans << endl;
}