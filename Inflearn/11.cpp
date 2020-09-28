#pragma warning(disable : 4996)
#include <stdio.h>
using namespace std;

int main() {
	int n, i, cnt = 0, tmp;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			tmp = tmp / 10;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}