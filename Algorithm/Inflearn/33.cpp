#pragma warning	(disable:4996)
#include <stdio.h>
int main() {
	int i, j, n, idx, tmp, a[101], cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++) {
		idx = i;
		for (j = i + 1; j < n; j++)
			if (a[j] > a[idx])
				idx = j;
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	for (i = 1; i < n; i++) {
		if (a[i - 1] != a[i])
			cnt++;
		if (cnt == 2) {
			printf("%d\n", a[i]);
			break;
		}
	}
	return 0;
}