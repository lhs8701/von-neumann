#include<stdio.h>

int main() {
	int A, B, C, result;
	int numbers[10] = { 0, };
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	result = A * B * C;

	while (result) {
		numbers[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", numbers[i]);

	return 0;
}