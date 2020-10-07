#pragma warning(disable : 4996)
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int ch[30], dis[30];
int main() {
	int i, n, m, a, b, x;
	vector<int> map[30];
	queue<int> q;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	q.push(1);
	ch[1] = 1;
	while (!q.empty()) {
		x = q.front();
		q.pop();
		for (i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}
	for (i = 2; i <= n; i++) {
		printf("%d : %d\n", i, dis[i]);
	}
	return 0;
}