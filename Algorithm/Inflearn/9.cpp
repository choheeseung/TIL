#pragma warning(disable : 4996)
#include <stdio.h>
int main() {
	int i, j, N, cnt;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		cnt = 0;
		for (j = 1; j <= i; j++) {
			if (i%j == 0)
				cnt++;
		}
		printf("%d ", cnt);
	}
	return 0;
}