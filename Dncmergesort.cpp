#include<iostream>
using namespace std;
void merge(int arr[] , int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

//dynamic array creation of length of len1 and len2
    int *left = new int[len1];
    int *right = new int[len2];

//copy values
//for left part
int k = s;
for (int i=0;i<len1;i++){
    left[i]=arr[k];
    k++;
}
//for right part copy values
k = mid+1;
for (int i=0;i<len2;i++){
    right[i]=arr[k];
    k++;
}
int leftIndex = 0;
int rightIndex = 0;
int mainArrayIndex = s;

//merge logic
while(leftIndex<len1 &&rightIndex<len2){
    if (left[leftIndex] < right[rightIndex]){
        arr[mainArrayIndex++]=left[leftIndex++];
    }
    else {
        arr[mainArrayIndex++]=right[rightIndex++];
    }
}
//copy logic for array
while(leftIndex < len1){
    arr[mainArrayIndex++]=left[leftIndex++];
}
while(rightIndex < len2){
    arr[mainArrayIndex++]=right[rightIndex++];
}
}
void mergeSort(int arr[], int s ,int e){
    //base case (i.e stop when single element)
    if (s >= e)
    return;

int mid = (s+e)/2;
//sort left part
mergeSort(arr, s ,mid);
//sort right part
mergeSort(arr,mid+1,e);
//merge two sorted array
merge(arr,s,e);
}

int main() {
    int arr[]= {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}

