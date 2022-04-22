#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Введите числа последовательности: " << endl;
    while (true) {
        cin >> n;
        if (n > 0) {
            sum += n;
        } else if (n == 0) {
            break;
        }
    }
    cout << "Сумма = " << sum;
    return 0;
}