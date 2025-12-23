#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];   
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   
        quickSort(arr, pi + 1, high); 
    }
}

int main() {
    int A[10] = {10, 2, 7, 4, 9, 5, 3, 1, 6, 8};

    cout << "Original array: \n";
    for (const auto &x : A) {
        cout << x << " ";
    }
    cout << endl;

    quickSort(A, 0, 9);

    cout << "After sorting (Ascending order): \n";
    for (const auto &x : A) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
