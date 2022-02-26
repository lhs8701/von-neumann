#include<stdio.h>
#include<string.h>

int main() {
	int T, k, n;
	int dp[15][15];

	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &k);
		scanf("%d", &n);
		memset(dp, 0, sizeof(int) * 15 * 15);
		for (int i = 0; i < 15; i++) {
			dp[0][i] = i;
			dp[i][1] = 1;
		}
		for (int i = 1; i <= k; i++) {
			for (int j = 2; j <= n; j++)
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
		}
		printf("%d\n", dp[k][n]);
	}

	return 0;
}