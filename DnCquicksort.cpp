#include <iostream>
using namespace std;
int partition(int arr[], int s, int e) {
    // Step 1: Choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // Step 2: Find the right position of the pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivotElement) {
            count++;
        }
    }
    // Place pivot at the correct position
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
     pivotIndex = rightIndex;

    // Step 3: Ensure elements to the left are smaller and to the right are larger
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex) {
        // Increment i until an element greater than the pivot is found
        while (arr[i] <= pivotElement) {
            i++;
        }
        // Decrement j until an element smaller than or equal to the pivot is found
        while (arr[j] > pivotElement) {
            j--;
        }
        // Swap the elements if they're on the wrong side of the pivot
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Partition logic, return pivotIndex
    int p = partition(arr, s, e);

    // Recursive calls
    // Left part
    quickSort(arr, s, p - 1);

    // Right part
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[] = {8, 1,1,1,1,1,2,2,2,2,2,2,3, 4, 20, 50, 30};
    int n = 17;

    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
