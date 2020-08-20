#include <iostream>
using namespace std;
int main() {
	int arr[5][4], sum[5] = { 0,0,0,0,0 }, big = 0, index;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
			sum[i] += arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		if (big < sum[i]) {
			big = sum[i];
			index = i + 1;
		}
	}
	cout << index << ' ' << big << '\n';
}