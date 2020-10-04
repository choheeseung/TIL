#pragma warning(disable : 4996)
#include <stdio.h>
using namespace std;

void recur(int x) {
	if (x == 0) return;
	else {
		recur(x - 1);
		printf("%d ", x);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	recur(n);
	return 0;
}