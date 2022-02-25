#include<stdio.h>

int main() {
	int N;
	int end = 1, cnt = 1;

	scanf("%d", &N);
	while (1) {
		if (N <= end) {
			printf("%d", cnt);
			break;
		}
		end += cnt++ * 6;
	}

	return 0;
}