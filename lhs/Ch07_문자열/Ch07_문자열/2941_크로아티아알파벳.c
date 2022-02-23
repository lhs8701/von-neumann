#include<stdio.h>
#include<string.h>

int main() {
	char line[101];
	int len, cnt = 0;

	scanf("%s", line);
	len = strlen(line);
	for (int i = 0; i < len; i++) {
		cnt++;
		if (line[i] == '=' || line[i] == '-') {
			cnt--;
			if (i > 1 && line[i] == '=' && line[i - 1] == 'z' && line[i - 2] == 'd')
				cnt--;
		}
		else if (line[i] == 'j') {
			if (i > 0 && (line[i - 1] == 'l' || line[i - 1] == 'n'))
				cnt--;
		}
	}
	printf("%d", cnt);

	return 0;
}