#pragma warning(disable : 4996)
#include <stdio.h>
int main() {
	int i, j, n, num, res;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int sum = 0;
		scanf("%d %d", &num, &res);
		for (j = 1; j <= num; j++) {
			sum += j;
		}
		if (sum == res)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}