#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int m, n;

    cout << "Введите количество строк матрицы: ";
    cin >> m;
    cout << "Введите количество столбцов матрицы: ";
    cin >> n;

    int matrix[m][n];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Суммы элементов в каждой строке:" << endl;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        cout << "Сумма в строке " << i + 1 << ": " << sum << endl;
    }

    return 0;
}
