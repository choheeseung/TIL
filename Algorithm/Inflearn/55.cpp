#pragma warning(disable : 4996)
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	int n, i, j = 1, m;
	scanf("%d", &n);
	stack<int> s;
	vector<char> str;
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		s.push(m);
		str.push_back('P');
		while (1) {
			if (s.empty()) break;
			if (j == s.top()) {
				s.pop();
				j++;
				str.push_back('O');
			}
			else break;
		}
	}
	if (!s.empty()) printf("impossible\n");
	else
		for (i = 0; i < str.size(); i++)
			printf("%c", str[i]);
	printf("\n");
	return 0;
}