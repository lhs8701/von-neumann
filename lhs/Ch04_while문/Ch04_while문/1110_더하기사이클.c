#include<stdio.h>

int func(int num) {
	int front = num % 10;
	int back = (num % 10 + num / 10) % 10;
	return front * 10 + back;
}

int main() {
	int N, r, cnt = 0;

	scanf("%d", &N);
	r = N;
	do {
		r = func(r);
		cnt++;
	} while (r != N);

	printf("%d", cnt);
	return 0;
}