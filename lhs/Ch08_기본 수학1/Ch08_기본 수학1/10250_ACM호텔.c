#include<stdio.h>

int main() {
	int T, H, W, N;
	int front, back;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d %d %d", &H, &W, &N);
		front = N % H;
		back = N / H + 1;
		if (!front) {
			front = H;
			back--;
		}
		printf("%d", front);
		if (back < 10)
			printf("%c", '0');
		printf("%d\n", back);
	}

	return 0;
}