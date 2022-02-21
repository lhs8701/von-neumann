#include<stdio.h>
#include<math.h>

int main() {
	int C, N, cnt;
	double sum, average;
	int scores[1000];
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		sum = 0;
		cnt = 0;
		for (int j = 0; j < N; j++) {
			scanf("%d", &scores[j]);
			sum += scores[j];
		}
		average = sum / N;
		for (int j = 0; j < N; j++) {
			if (scores[j] > average)
				cnt++;
		}
		printf("%.3lf%%\n", cnt / (double)N * 100);
	}

	return 0;
}