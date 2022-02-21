#include<stdio.h>

int main() {
	int A, B, cnt = 0;
	int remainder[42] = { 0, };

	for (int i = 0; i < 10; i++) {
		int num;
		scanf("%d", &num);
		remainder[num % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (remainder[i])
			cnt++;
	}
	printf("%d", cnt);
	
	return 0;
}