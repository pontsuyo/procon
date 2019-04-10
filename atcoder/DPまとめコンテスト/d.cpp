#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N, W;
	cin >> N >> W;
	int w[N], v[N];

	for(int i=0;i<N;i++){
		cin >> w[i] >> v[i];
	}

	long long int dp[W+1][N] = {0};

	for(int j=0;j<W+1;j++){
		if(j>=w[0]){
			dp[j][0] = v[0];
		}else{
			dp[j][0] = 0;
		}
	}

	for(int i=1;i<N;i++){
		for(int j=0;j<W+1;j++){
			if(j-w[i]>=0){
				dp[j][i] = max(dp[j-w[i]][i-1] + v[i], dp[j][i-1]);
			}else{
				dp[j][i] = dp[j][i-1];
			}
		}		
	}
	cout << dp[W][N-1] << endl;
	return 0;
}