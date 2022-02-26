#include<stdio.h>
#include<limits.h>

int main() {
	int N, r;
	int box_8 = 0, ans = INT_MAX;
	scanf("%d", &N);

	r = N;

	while (N >= box_8 * 8) {
		if ((N - box_8 * 8) % 3 == 0) {
			if (ans > box_8 * 2 + (N - box_8 * 8) / 3)
				ans = box_8 * 2 + (N - box_8 * 8) / 3;
		}
		if ((N - box_8 * 8) % 5 == 0) {
			if (ans > box_8 * 2 + (N - box_8 * 8) / 5)
				ans = box_8 * 2 + (N - box_8 * 8) / 5;
		}
		box_8++;
	}
	printf("%d", (ans == INT_MAX) ? -1 : ans);

	return 0;
}