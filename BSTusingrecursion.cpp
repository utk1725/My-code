#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr,int s,int e,int key ){
    //Base case
    //key not found
    if (s>e)
        return -1;

        int mid = (s+e)/2;
//key found
        if(arr[mid] == key)
        return mid;
//arr[mid] < key -> search on right side
if(arr[mid]<key){
    return binarySearch(arr,mid+1,e,key);

}else{
//arr[mid] > key -> search on left side
    return binarySearch(arr,s,mid-1,key);
}
}

int main(){
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(40);
v.push_back(60);
v.push_back(70);
v.push_back(90);

int target = 90;
int s =0;
int e=v.size()-1;
int ans = binarySearch(v , s ,e ,target);

cout<<"the answer is "<<ans<<endl;

return 0;

}
