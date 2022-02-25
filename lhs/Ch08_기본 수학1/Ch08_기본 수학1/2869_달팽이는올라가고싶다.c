#include<stdio.h>

int main() {
	int A, B, V, ans = 0;
	scanf("%d %d %d", &A, &B, &V);

	ans = (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		ans++;
	printf("%d", ans + 1);

	return 0;
}