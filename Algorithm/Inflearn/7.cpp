#pragma warning(disable : 4996)
#include <stdio.h>
#include <cstdio>
using namespace std;
int main() {
	char a[101], b[101];
	int i, p = 0;
	fgets(a, 100, stdin);
	for (i = 0; i < a[i]!='\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] >= 65 && a[i] <= 90) {
				b[p++] = a[i] + 32;
			}
			else b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s\n", b);
	return 0;
}