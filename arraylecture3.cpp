#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//decleartion of 2d array row and column wise//
/*int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
cout<<"to print row wise elements "<<endl;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j] <<" ";
    }
    cout<<endl;

}
cout <<"to print coloum wise elements "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[j][i] <<" ";
    }
    cout<<endl;

}
}*/
//input of 2d array //
/*int main(){
    int arr[3][3];
    cout<<"enter the elements row wise "<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
cout<<"the array is " <<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}*/

//sum of row elements//
/*void printrowwisesum(int arr[][3],int row,int colm){
for (int i=0; i<row ;i++){
    int sum=0;
    for(int j=0;j<colm;j++){
        sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
}

}
int main(){
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printrowwisesum(brr,3,3)
   
}*/

//search key//
/*void searchkey(int arr[][3],int row,int colm,int key){
    for (int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            if (arr[i][j]==key){
                cout<<"element found"<<endl;
                return;
            }
        }
    }
      cout<<"not element"<<endl;
}

int main(){
    int brr[][3]={{1,2,3},{3,4,5},{4,5,6}};
    searchkey(brr,3,3,2);

}*/
 
//get mex element//
/*int getmax(int arr[][3],int row,int colm){
    int maxx=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;i<colm;j++){
            if(arr[i][j]>maxx){
                maxx = arr[i][j];
            }
        }
    }
    return maxx;
}
int main(){
    int brr[][3]={{1,2,3},{3,4,5},{4,5,6}};
   int max_value = getmax(brr,3,3);
   cout<<max_value;
   return 0;
}*/

//transpose of a matrix//
/*void transpose(int arr[][3],int row,int colm){
    for(int i=0;i<row;i++){
        for(int j=0;i<colm;j++){
            swap(arr[i][j],arr[j][i]);
            }
        }
    }
*/

