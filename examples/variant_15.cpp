#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Массив температур тепловой карты (Вариант 15)
    int heatmap[] = {
        18, 21, 25, 29, 31,
        27, 23, 20, 17, 33,
        28, 24
    };
    const std::size_t n = sizeof(heatmap) / sizeof(heatmap[0]);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "--- Анализ тепловой карты ---\n";
    std::cout << "Количество ячеек: " << n << "\n\n";

    // 1. Сумма значений (функция библиотеки)
    std::cout << "Сумма значений:        " << arr_sum(heatmap, n) << '\n';

    // 2. Максимальная температура (функция библиотеки)
    std::cout << "Максимальная темп.:    " << arr_max(heatmap, n) << '\n';

    // 3. Минимальная температура (функция библиотеки)
    std::cout << "Минимальная темп.:     " << arr_min(heatmap, n) << '\n';

    // 4. Средняя температура (функция библиотеки)
    std::cout << "Средняя температура:   " << arr_average(heatmap, n) << '\n';

    // 5. Количество значений выше 27 градусов (цикл, так как такой функции в библиотеке нет)
    int count_above_27 = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (heatmap[i] > 27) {
            ++count_above_27;
        }
    }
    std::cout << "Значений выше 27 град.: " << count_above_27 << '\n';

    return 0;
}