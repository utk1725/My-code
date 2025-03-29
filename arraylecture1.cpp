#include<iostream>
#include<vector>
using namespace std;

//findunique element//
/*int findunique(vector<int>arr){
    int ans = 0;
    for (int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;

}

int main(){
int n;
cout<<"enter the size of arr"<<endl;
cin >> n;

vector<int>arr(n);
cout<<"enter the elements of the arr"<<endl;
for(int i=0;i<arr.size();i++){
    cin >>arr[i];
}
int uniqueelement = findunique(arr);
cout<< uniqueelement<<endl;


}*/

//array swap//
/*int main(){
int arr[8]= {10,20,30,40,50,60,70,80 };
int size = 8;

int start = 0;
int end = size-1;

/*while(true) {
    if (start > end)
    break;
if (start == end){
    cout << arr[start]<< " ";
}else{
    cout << arr[start]<<" ";
    cout << arr[end]<<" ";
}
 start++;
    end--;
}
return 0;
}
while(start < end){
     swap(arr[start],arr[end]);
     start++;
     end--;
}

for(int i=0;i<size;i++){
cout << arr[i]<< " ";
}
}*/


//vector push pop//
/*int main(){
vector<int> arr;

cout << arr.size() <<endl;
cout << arr.capacity() <<endl;

arr.push_back(9);
arr.push_back(3);
arr.push_back(4);
arr.pop_back();

for (int i=0;i<arr.size();i++){
cout << arr[i] << " ";

}
cout <<endl;
}  */  

