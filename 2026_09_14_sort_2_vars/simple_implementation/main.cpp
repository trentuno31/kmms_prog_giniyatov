#include <iostream>


void counting_sort(int *arr, const int size) {
    int arr_counter[1001] = {};
    for (int i = 0; i < size; i++) {
        arr_counter[arr[i]]++;
    }

    int arr_i = 0;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < arr_counter[i]; j++) {
            arr[arr_i++] = i;
        }
    }

}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;
    int arr[n];

    std::cout << "[!]Все элементы >=0 и не превосходят (1001)!\n";
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)std::cin >> arr[i];

    std::cout << "Ваш массив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    counting_sort(arr, n);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

}

