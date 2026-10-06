#include <iostream>

// Сортировка подсчетом
void counting_sort(int *arr, const int size);

void print_arr(const char *comment, int *arr, const int size);


int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    // VLA- размер массива задается переменной n в процессе работы функции
    int *arr = new int[n];

    std::cout << "[!]Все элементы >=0 и не превосходят (1001)!\n"
              << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)std::cin >> arr[i];

    print_arr("Ваш массив: ", arr, n);

    counting_sort(arr, n);
    print_arr("Отсортированный массив: ", arr, n);

    delete[] arr;
    arr = nullptr;
    return 0;
}

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

void print_arr(const char *comment, int *arr, const int size) {
    std::cout << comment;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}