#pragma warning(disable : 4996)
#include <stdio.h>
int main() {
	int n, i, cnt = 0, tmp, digit;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;
			if (digit == 3)
				cnt++;
			tmp = tmp / 10;
		}
	}
	printf("%d\n", cnt);
	return 0;
}