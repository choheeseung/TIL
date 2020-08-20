#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	int cur = v[N - 1];
	int result = 0;
	for (int i = N - 2; i >= 0; i--) {
		while (v[i] >= cur) {
			v[i]--;
			result++;
		}
		cur = v[i];
	}
	cout << result << "\n";
	return 0;
}