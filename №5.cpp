#include <string> 
#include <iostream>

using namespace std;

bool isDigitSimple(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
            }
    }
    return true;
}


int main()
{
    int n;
    string answer = "";
    cout << "Введите числа последовательности: " << endl;
    while (true) {
        cin >> n;
        
        if (n == 0) {
            break;
        }
        if (isDigitSimple(n)) {
            answer += to_string(n) + " ";
        }
    }
    cout << "Результат: " << answer;
    
}