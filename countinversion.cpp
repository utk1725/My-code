#include <iostream>
#include <vector>

using namespace std;

// Merge function to merge two sorted halves and count inversions
long merge(vector<int>& arr, vector<int>& temp, int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    long inv_count = 0;

    // Merge the two halves while counting inversions
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // Count inversions
        }
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from right half
    while (j <= end) {
        temp[k++] = arr[j++];
    }

    // Copy sorted temp array back to original array
    for (i = start; i <= end; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

// Merge sort function to recursively sort and count inversions
long mergesort(vector<int>& arr, vector<int>& temp, int start, int end) {
    if (start >= end) return 0;
    
    int mid = start + (end - start) / 2;
    long inv_count = 0;

    inv_count += mergesort(arr, temp, start, mid);
    inv_count += mergesort(arr, temp, mid + 1, end);
    inv_count += merge(arr, temp, start, mid, end);

    return inv_count;
}

// Function to count inversions in the array
long countInversions(vector<int> arr) {
    vector<int> temp(arr.size(), 0);
    return mergesort(arr, temp, 0, arr.size() - 1);
}

int main() {
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(8);
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(0);

    cout << "Number of inversions: " << countInversions(arr) << endl;
    return 0;
}
