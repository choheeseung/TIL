#include <iostream>
using namespace std;
int main(void) {
	int A[42] = { 0, };
	int number;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> number;
		A[number % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
		count += A[i];
	cout << count;
}