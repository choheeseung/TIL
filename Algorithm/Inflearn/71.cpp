#pragma warning(disable : 4996)
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int ch[10001], d[3] = { 1,-1,5 };
int main() {
	int i, s, e, x, pos;
	queue<int> q;
	scanf("%d %d", &s, &e);
	ch[s] = 1;
	q.push(s);
	while (!q.empty()) {
		x = q.front();
		q.pop();
		for (i = 0; i < 3; i++) {
			pos = x + d[i];
			if (pos <= 0 || pos > 10000)
				continue;
			if (pos == e) {
				printf("%d\n", ch[x]);
				exit(0);
			}
			if (ch[pos] == 0) {
				ch[pos] = ch[x] + 1;
				q.push(pos);
			}
		}
	}
	return 0;
}