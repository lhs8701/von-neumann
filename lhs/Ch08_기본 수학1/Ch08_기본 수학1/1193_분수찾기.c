#include<stdio.h>

int main() {
	int X, set = 1, end = 1;

	scanf("%d", &X);
	while (X > end)
		end += ++set;
	if (set % 2)
		printf("%d/%d\n", end - X + 1, set - (end - X));
	else
		printf("%d/%d\n", set - (end - X), end - X + 1);

	return 0;
}