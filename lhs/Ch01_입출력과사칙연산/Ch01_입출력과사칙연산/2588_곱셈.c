#include<stdio.h>
#include<math.h>
int main() {
	int A, B, sum=0;
	int i;
	scanf("%d", &A);
	scanf("%d", &B);
	for (i = 0; i < 3; i++) {
		printf("%d\n", A * (B % 10));
		sum += A * (B % 10) * pow(10,i);
		B /= 10;
	}
	printf("%d", sum);

	return 0;
}