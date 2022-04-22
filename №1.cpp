#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int N = 0, n = 0;
	float M = 0, S = 0, A = 0;
	cout << "Введите длину последовательности" << endl;
	cin >> N;
	n = N;
	cout << "Введите числа" << endl;
	while (N > 0) {
		cin >> M;
		S += M;
		N--;
	}
	A = S / n;
	cout << "Среднее арефмитическое чисел = " << A << endl;
	return 0;
}