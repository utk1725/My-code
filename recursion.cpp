#include <iostream>
#include <vector>
using namespace std;
//check array is sorted by recursion
bool checksorted(vector<int> &arr, int& n,int i){
    //base case
    if (i == n-1){
        return true;
    }
    if (arr[i]>arr[i+1]){
        return false;
    }
    return checksorted(arr ,n ,i+1);
    }

int main() {
  //vector<int> v{10, 20, 30, 40, 60};
  vector<int> v;
  v.push_back(10);
v.push_back(20);
v.push_back(40);
v.push_back(60);
v.push_back(70);
v.push_back(90);
    int n = v.size();
    int i = 0;
    bool issorted = checksorted(v , n, i);

    if(issorted) {
        cout<<"array is sorted"<<endl;
    }
    else {
        cout<<"not sorted "<< endl;
    }


    return 0;
}