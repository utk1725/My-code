#include<iostream>
#include<vector>
using namespace std;

//unique element array//
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
cout<< "the unique element is "<< uniqueelement<<endl;
*/


//union of two array//
/*int main(){
    int arr[]={1,2,3,4};
    int sizea=4;
    int brr[]={4,5,6,7,8,9};
    int sizeb=6;

    vector<int>ans;

    for (int i=0;i<sizea;i++){
         
        ans.push_back(arr[i]);
    }
    for (int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
    
    for (int i=0;i<ans.size();i++){
        cout<<ans[i];
    }}*/


//finding common element//
/*int main(){
    int arr[]={1,2,3,4,5,3};
    int sizea=6;
    int brr[]={1,6,7,3,0,4,3};
    int sizeb=7;
 
 vector<int>ans;

    for(int i=0;i<sizea;i++){
            for(int j=0;j<sizeb;j++){
                if (arr[i]==brr[j]){
                    brr[j]=INT_MIN;
                ans.push_back(arr[i]);
          }
          }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }*/


//pair sum question//
/*int main(){
    int arr[]={10,20,30,40,60,70};
    int sizea=6;

    for(int i=0;i<sizea;i++){
        for(int j=i+1;j<sizea;j++){
           
        if (arr[i]+arr[j]==50){
             
         cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
    }
    }
    
    
}*/

//sort 1's and 0's//ß
/*int main(){
    
    int arr[]={0,1,1,0,1,0,1,0,0};

    int start=0;
    int end=arr.length()-1;

    for(int i=0;i<arr.size();i++){
    if(arr[i]==0){
        swap(arr[i],arr[start]);
        start++;
    }
    }
    for (int i=arr.size();i>0;i--){
    if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
    }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
}
}*/

