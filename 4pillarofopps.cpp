#include<iostream>
using namespace std;

//function overloading 
// class math{
//     public:
//     int sum(int a,int b){
//         return a+b;
//     }
//     int sum(int a,int b,int c){
//         return a+b+c;
//     }
//     int sum(int a,float b){
//         return a+b;

//     }
// };


//operator overloading
class param{
    public:
    int val;

    void operator+(param& obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<(value2-value1)<<endl;
    }
};
int main(){
   // math obj;
    //cout<<obj.sum(2,5);
    param obj1,obj2;
    obj1.val = 7;
    obj2.val = 2;

    //this should print the difference between them 
    obj1 + obj2;
    return 0;
}