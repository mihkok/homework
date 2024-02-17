#include <iostream>

int binpoisk(const int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binpoisk(arr, 0, size - 1, target);

    if (result == -1) {
        std::cout << "Элемент не найден" << std::endl;
    } else {
        std::cout << "Индекс элемента: " << result << std::endl;
    }

    return 0;
}