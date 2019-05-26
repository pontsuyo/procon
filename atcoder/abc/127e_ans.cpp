#include<cstdio>
#include<iostream>
using namespace std;
typedef long long LL;
const int mod=1000000007;

int mul(int x,int k){
	LL ans=1,mid=x;
	while(k)
	{
		if(k&1) ans=ans*mid%mod;
		mid=mid*mid%mod;
		k>>=1;
	}
	return ans;
}

int main()
{
	int N,M,K;
    LL ans1=1,ans2=1;
    scanf("%d%d%d",&N,&M,&K);
	int u=N*M;
    N+=M,M=u;
	
    for(int i=0;i<K-2;++i)
	{
		ans1=ans1*(i+1)%mod;
		ans2=ans2*(M-2-i)%mod;
	}
	ans2=ans2*mul(ans1,mod-2)%mod;
	ans2=ans2*mul(6,mod-2)%mod*M%mod*N%mod*(M-1)%mod;
	printf("%lld\n",ans2);
	return 0;
}