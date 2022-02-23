#include<stdio.h>

int selfSum(int n) {
	int r = n, sum = 0;
	while (r) {
		sum += r % 10;
		r /= 10;
	}
	return sum + n;
}

void selfNumber(int* numbers, int n) {
	int r = n;
	while (1) {
		r = selfSum(r);
		if (r <= 10000)
			numbers[r] = 1;
		else
			break;
	}
}

int main() {
	int numbers[10001] = { 0, };
	for (int i = 1; i < 10001; i++)
		selfNumber(numbers, i);

	for (int i = 1; i < 10001; i++) {
		if (!numbers[i])
			printf("%d\n", i);
		;
	}

	return 0;
}