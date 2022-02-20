#include<stdio.h>

int main() {
	int A, B, C;
	int H, M;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	H = A;
	M = B + C;
	if (M >= 60) 
		H += M / 60;
	printf("%d %d", H%24, M%60);

	return 0;
}