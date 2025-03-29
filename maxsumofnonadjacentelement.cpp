#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr,int i,int sum , int &maxi){
    //base case
    if(i >= arr.size()){
        maxi = max(sum, maxi);
        return 0;

    }
    solve(arr, i+2, sum+arr[i], maxi);
    solve(arr, i+1, sum, maxi);
    return maxi;
}

int main(){
vector<int> arr;
arr.push_back(2);
arr.push_back(1);
arr.push_back(4);
arr.push_back(9);
int sum = 0;
int maxi = INT_MIN;
int i = 0;

solve(arr,i,sum,maxi);
cout<< maxi <<endl;


return 0;
}