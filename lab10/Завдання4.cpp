#include <iostream>
using namespace std;

int main() {
    const int m = 4; // кількість рядків
    const int n = 6; // кількість стовпців
    int array[m][n];

    // Введення значень масиву користувачем
    cout << "Enter the elements of the array (" << m << " rows and " << n << " columns):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Обчислення суми елементів у кожному стовпчику
    for (int j = 0; j < n; j++) {
        int colSum = 0; // змінна для зберігання суми елементів поточного стовпчика
        for (int i = 0; i < m; i++) {
            colSum += array[i][j]; // додавання елемента до суми стовпчика
        }
        cout << "Column " << j + 1 << ": sum = " << colSum << endl; // виведення суми для кожного стовпчика
    }

    return 0;
}
