#include <iostream>
#include <cstdlib>
#include <ctime>

#include "io.hpp"

float get_arr_average(int sum_arr, const int arr_size);

int initial_random_arr_and_get_his_sum(int *arr, const int arr_size);

int main() {
    std::srand(std::time({})); // use current time as seed for random generator
    const int arr_size = 10;
    int count_arrays = 3;

    for (int i = 0; i < count_arrays; i++) {
        int arr[arr_size];
        int number_of_arr = i + 1;

        int sum_arr = initial_random_arr_and_get_his_sum(arr, arr_size);
        biv::print_arr("Элементы массива №", number_of_arr, arr, arr_size);

        float arr_average = get_arr_average(sum_arr, arr_size);
        std::cout << "Среднее арифметическое : " << arr_average << "\n";
    }

    return 0;
}

float get_arr_average(int sum_arr, const int arr_size) {
    return float(sum_arr) / arr_size;
}

int initial_random_arr_and_get_his_sum(int *arr, const int arr_size) {
    int sum_arr = 0;

    for (int i = 0; i < arr_size; i++) {
        arr[i] = std::rand() % 10;
        sum_arr += arr[i];
    }

    return sum_arr;
}