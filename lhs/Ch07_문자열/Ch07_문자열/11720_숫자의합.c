#include<stdio.h>
#include<string.h>

int main() {
	int N, sum = 0;
	char num[101];

	scanf("%d", &N);
	scanf("%s", num);
	for (int i = 0; i < N; i++) 
		sum += num[i] - '0';
	
	printf("%d", sum);

	return 0;
}