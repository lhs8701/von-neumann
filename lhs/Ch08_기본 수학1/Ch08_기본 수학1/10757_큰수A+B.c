#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char* A, * B;
	int* ans;
	int curA, curB, C = 0, d, idx = 0;

	A = (char*)malloc(sizeof(char) * 10001);
	B = (char*)malloc(sizeof(char) * 10001);
	ans = (int*)malloc(sizeof(int) * 10001);

	scanf("%s %s", A, B);
	curA = strlen(A) - 1; curB = strlen(B) - 1;

	while (curA >= 0 && curB >= 0) {
		d = A[curA] - '0' + B[curB] - '0' + C;
		C = d / 10;
		d %= 10;
		ans[idx++] = d;
		curA--; curB--;
	}
	if (curA < 0) {
		for (int i = curB; i >= 0; i--) {
			d = B[i] - '0' + C;
			C = d / 10;
			d %= 10;
			ans[idx++] = d;
		}
	}
	else {
		for (int i = curA; i >= 0; i--) {
			d = A[i] - '0' + C;
			C = d / 10;
			d %= 10;
			ans[idx++] = d;
		}
	}
	if (C)
		ans[idx++] = 1;
	for (int i = idx - 1; i >= 0; i--)
		printf("%d", ans[i]);

	return 0;
}