#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int N, cnt = 0, len;
	char word[101];
	int alpha[26];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", word);
		len = strlen(word);
		memset(alpha, 0, sizeof(int) * 26);
		for (int j = 0; j < len; j++) {
			if (word[j] != word[j + 1]) {
				if (alpha[word[j] - 'a']) {
					cnt--;
					break;
				}
				alpha[word[j] - 'a'] = 1;
			}
		}
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}