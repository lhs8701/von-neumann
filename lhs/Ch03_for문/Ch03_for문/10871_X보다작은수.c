#include<stdio.h>
#include<string.h>

int main() {
	int N, X;
	int arr[10000];

	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++) {
		if (arr[i] < X)
			printf("%d ", arr[i]);
	}

	return 0;
}