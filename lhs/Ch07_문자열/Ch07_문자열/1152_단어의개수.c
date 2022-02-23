#include<stdio.h>
#include<string.h>

int main() {
	char str[1000001];
	int len, cnt = 0;

	gets(str);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ' && i != 0 && i != len - 1)
			cnt++;
	}
	printf("%d", (str[0] == ' ' && len == 1) ? 0 : cnt + 1);

	return 0;
}