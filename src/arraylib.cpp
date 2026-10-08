#include "arraylib.h"
#include <vector>
#include <algorithm> // Для std::sort

int arr_sum(const int* arr, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) {
        s += arr[i];
    }
    return s;
}

int arr_max(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 1; i < n; ++i) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}

int arr_min(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 1; i < n; ++i) {
        if (arr[i] < m) m = arr[i];
    }
    return m;
}

double arr_average(const int* arr, std::size_t n) {
    double sum = 0;
    for (std::size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum / n;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > 0) count++;
    }
    return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] < 0) count++;
    }
    return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] == 0) count++;
    }
    return count;
}

int arr_product(const int* arr, std::size_t n) {
    int p = 1;
    for (std::size_t i = 0; i < n; ++i) {
        p *= arr[i];
    }
    return p; // Помните: при переполнении поведение не определено
}

double arr_median(const int* arr, std::size_t n) {
    // Копируем массив, чтобы не менять исходный
    std::vector<int> temp(arr, arr + n);
    std::sort(temp.begin(), temp.end());
    
    if (n % 2 != 0) {
        // Нечётное количество: средний элемент
        return temp[n / 2];
    } else {
        // Чётное количество: среднее двух средних
        return (temp[n / 2 - 1] + temp[n / 2]) / 2.0;
    }
}