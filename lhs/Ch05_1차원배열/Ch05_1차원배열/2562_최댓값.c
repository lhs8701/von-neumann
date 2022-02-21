#include<stdio.h>
#include<limits.h>

int main() {
	int num, max = INT_MIN, order;
	for (int i = 1; i <= 9; i++) {
		scanf("%d", &num);
		if (max < num) {
			max = num;
			order = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", order);

	return 0;
}