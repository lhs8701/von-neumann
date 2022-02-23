#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
	char* input;
	int alpha[26] = { 0, };
	int max = -1, flag = 0, ans;
	int len;
	input = (char*)malloc(sizeof(char) * 1000001);

	scanf("%s", input);
	len = strlen(input);
	for (int i = 0; i < len; i++)
		alpha[tolower(input[i]) - 'a']++;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			flag = 0;
			max = alpha[i];
			ans = i;
		}
		else if (max == alpha[i])
			flag = 1;
	}
	if (flag)
		printf("%c", '?');
	else
		printf("%c", 'A' + ans);
	free(input);


	return 0;
}