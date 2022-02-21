#include<stdio.h>
#include<string.h>

int main() {
	int T, score, comb;
	char quiz[100];

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", quiz);
		comb = 0; score = 0;
		for (int j = 0; j < strlen(quiz); j++) {
			if (quiz[j] == 'O')
				score += ++comb;
			else
				comb = 0;
		}
		printf("%d\n", score);
	}

	return 0;
}