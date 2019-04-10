#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    int N, M;
    cin >> N >> M;
    
    string s, t;
    cin >> s;
    cin >> t;

    int g = gcd(N, M);
    long long l = (long long) N * M / g;

    int a = M/g;
    int b = N/g;
    
    int flag = 0;
    int le = min(N,M)/(min(N,M)/g);

    for(int i = 0; i < le; i++)
    {
        if(s[i*b] != t[i*a]){
            cout << -1 << endl;
            return 0;            
        }
    }

    cout << l << endl;
    return 0;
}