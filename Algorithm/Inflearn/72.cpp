#pragma warning(disable : 4996)
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	int n, k, i;
	queue<int> q;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
		q.push(i);
	while (!q.empty()) {
		for (i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
		if (q.size() == 1) {
			printf("%d\n", q.front());
			q.pop();
		}
	}
	return 0;
}