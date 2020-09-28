#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int a[10], b[10], i, acnt = 0, bcnt = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
		scanf("%d", &b[i]);
	for (i = 0; i < 10; i++) {
		if (a[i] > b[i])
			acnt += 3;
		else if (a[i] < b[i])
			bcnt += 3;
		else {
			acnt += 1;
			bcnt += 1;
		}
	}
	printf("%d %d\n", acnt, bcnt);
	if (acnt > bcnt)
		printf("A\n");
	else if (acnt < bcnt)
		printf("B\n");
	else
		printf("D\n");
	return 0;
}