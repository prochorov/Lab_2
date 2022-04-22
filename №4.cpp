#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Введите число: " << endl;
    cin >> n;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << "Нет";
            return 0;
            }
    }
    cout << "Да";
    return 0;
}