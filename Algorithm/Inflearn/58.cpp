#pragma warning(disable : 4996)
#include <stdio.h>

void recur(int v) {
	if (v > 7) return;
	else {
		recur(v * 2);
		recur(v * 2 + 1);
		printf("%d ", v);
	}
}
int main() {
	recur(1);
	return 0;
}