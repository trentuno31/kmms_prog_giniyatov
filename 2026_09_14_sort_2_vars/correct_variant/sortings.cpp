#include "sortings.hpp"
#include "algorithm"

void biv::bubble_sort(int *const arr, const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void merge(int *arr, const int size) {
    int left_size = size / 2;

    //Тут динамический массив, т.к size определяется после компиляции
    int temp_arr[size];

    int left = 0;
    int right = left_size;
    int i = 0;

    while (left < left_size && right < size) {
        if (arr[left] <= arr[right]) {
            temp_arr[i] = arr[left];
            left++;
        } else {
            temp_arr[i] = arr[right];
            right++;
        }
        i++;
    }

    while (left < left_size) {
        temp_arr[i] = arr[left];
        left++;
        i++;
    }

    while (right < size) {
        temp_arr[i] = arr[right];
        right++;
        i++;
    }

    for (i = 0; i < size; i++) {
        arr[i] = temp_arr[i];
    }

}

// реализация сортировки слиянием с способом описания массива
// через *arr - указатель на первый элемент массива и size - длину массива.
void biv::merge_sort(int *arr, const int size) {
    if (size > 1) {
        int left_size = size / 2;
        int right_size = size - left_size;

        // Рекурсивная сортировка подмассивов
        merge_sort(arr, left_size);
        merge_sort(arr + left_size, right_size);

        //Слияние двух массивов
        merge(arr, size);
    }
}

