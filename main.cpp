#include <assert.h>
#include <iostream>
#include <matrix.hpp>
#include "version.h"
//01
int main()
{
    using std::cout;
    using std::endl;
    using std::size_t;

    cout << "Application version: " << PROJECT_VERSION << endl;

    // Создание матрицы размера 10x10 с элементами по умолчанию равными 0
    Matrix<int, 0> matrix;
    for (size_t i = 0; i < 10; ++i) {
        matrix[i][i] = i;           // Заполняем диагональ элементами от 0 до 9
        matrix[i][9 - i] = 9 - i;   // Заполняем обратную диагональ
    }

    // Печатаем элементы матрицы в диапазоне строк от 1 до 8 и столбцов от 1 до 8
    for (size_t row = 1; row < 9; ++row) {
        for (size_t col = 1; col < 9; ++col) {
            cout << matrix[row][col];
            if (col < 8) cout << " ";
        }
        cout << endl;
    }

    // Выводим текущий размер матрицы
    cout << "Matrix size: " << matrix.size() << endl;

    return 0;
}

