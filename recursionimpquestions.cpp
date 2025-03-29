#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>arr,int target) {
    //base case
if (target == 0){
    return 1;
}
if (target < 0){
    return INT_MAX;
}
//recursive case
int mini = INT_MAX;
for(int i=0;i<arr.size();i++){
int ans = solve(arr , target -arr[i]);
//updating mini if ans is not negative
if (ans != INT_MAX)
mini = min(mini,ans+1);
}
return mini;
}


int main (){
vector <int> arr; 
arr.push_back(1);
arr.push_back(2);
int target = 5;

int ans = solve(arr ,target);
cout<<ans;

    return 0;
}