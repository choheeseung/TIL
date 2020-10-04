#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int n, m, i, cnt = 0, val, max = -2147000000;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &val);
		if (val > m)
			cnt++;
		else cnt = 0;
		if (cnt > max)
			max = cnt;
	}
	if (max == 0)
		printf("-1");
	else
		printf("%d\n", max);
	return 0;
}