#include<stdio.h>
#include<string.h>

int main() {
	char S[101];
	int index[26] = { 0, };

	scanf("%s", S);
	for (int i = 0; i < strlen(S); i++) {
		if (!index[S[i] - 'a'])
			index[S[i] - 'a'] = i + 1;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", index[i] - 1);

	return 0;
}