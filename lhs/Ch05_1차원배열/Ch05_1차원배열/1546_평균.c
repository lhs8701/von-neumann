#include<stdio.h>

int main() {
	int N;
	double sum = 0, max;
	int scores[1000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &scores[i]);

	max = scores[0];
	for (int i = 1; i < N; i++)
		if (max < scores[i])
			max = scores[i];

	for (int i = 0; i < N; i++)
		sum += scores[i] / max * 100;
	printf("%lf", sum / N);

	return 0;
}