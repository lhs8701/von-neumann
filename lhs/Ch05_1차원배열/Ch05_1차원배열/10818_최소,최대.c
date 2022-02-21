#include<stdio.h>
#include<limits.h>

int main() {
	int N, min = INT_MAX, max = INT_MIN, num;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (min > num)
			min = num;
		if (max < num)
			max = num;
	}
	printf("%d %d", min, max);

	return 0;
}