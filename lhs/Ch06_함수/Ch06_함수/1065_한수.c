#include<stdio.h>

int hans(int num) {
	int r = num;
	int d1 = r % 10, d2 = r / 10 % 10, diff = d2 - d1;
	while (r >= 10) {
		d1 = r % 10;
		d2 = r / 10 % 10;
		if (d2 - d1 != diff)
			return 0;
		r /= 10;
	}
	return 1;
}

int main() {
	int N, cnt = 0;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		if (hans(i))
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}