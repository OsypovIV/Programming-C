#include <iostream>
using namespace std;

int main() {
    const int m = 6; // кількість рядків
    const int n = 4; // кількість стовпців
    int array[m][n];

    // Введення значень масиву користувачем
    cout << "Enter the elements of the array (" << m << " rows and " << n << " columns):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Обчислення кількості парних чисел у кожному стовпчику
    for (int j = 0; j < n; j++) {
        int evenCount = 0; // лічильник парних чисел у стовпчику
        for (int i = 0; i < m; i++) {
            if (array[i][j] % 2 == 0) { // перевірка, чи число парне
                evenCount++;
            }
        }
        cout << "Column " << j + 1 << ": even numbers count = " << evenCount << endl; // виведення результату для кожного стовпчика
    }

    return 0;
}
