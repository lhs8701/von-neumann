#include<stdio.h>
#include<string.h>

void reverse(char* num) {
	char temp;
	temp = num[0];
	num[0] = num[2];
	num[2] = temp;
}

int main() {
	char A[4];
	char B[4];

	scanf("%s %s", A, B);
	reverse(A);
	reverse(B);
	if (strcmp(A, B) > 0)
		printf("%s", A);
	else
		printf("%s", B);

	return 0;
}