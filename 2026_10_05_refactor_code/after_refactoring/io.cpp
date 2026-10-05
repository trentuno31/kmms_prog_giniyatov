#include "io.hpp"
#include <iostream>

void biv::print_arr(const char *const comment, int number_of_array, int *arr, const int arr_size) {
    std::cout << comment << number_of_array << ": ";

    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}