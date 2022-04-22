#include <iostream>

using namespace std;

int main(){
    int N = 0, M = 0;
    cout << "Введите искомое число" << endl;
    cin >> N;
    if (N != 0){
        M = 2*N;
        cout << "Введите числа последовательности" << endl;
        while (M != 0) {
            cin >> M;
            if (M == N){
                cout << "Найдено: " << M << endl;
                return 0;
            }
        }
        cout << "Не найдено" << endl;
    }
    return 0;
}