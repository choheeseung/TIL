#pragma warning(disable : 4996)
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[60][60];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int main() {
	int n, i, j, k, cnt = 0, flag;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			flag = 0;
			for (k = 0; i < 4; k++) {
				if (a[i][j] <= a[i + dx[k]][j + dy[k]]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}