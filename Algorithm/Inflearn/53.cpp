#pragma warning(disable : 4996)
#include <stdio.h>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";
	scanf("%d %d", &n, &k);
	while (n > 0) {
		s.push(n%k);
		n = n / k;
	}
	while (!s.empty()) {
		printf("%c", str[s.top()]);
		s.pop();
	}
	printf("\n");
	return 0;
}