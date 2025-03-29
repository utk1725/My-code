#include<iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int size;
    int top;

    Stack(int stack){
        arr=new int[size];
        this-> size = size;
        top = -1;
    }
void push(int data){
    if(size - top > 1){
        //space available
        //insert
        top++;
        arr[top] = data;
    }
    else{
        //space not available
        cout<<"stack overflow"<<endl;
    }
     

}
void pop(){
    if(top == -1){
        cout<<"stack empty"<<endl;
    }
    else{
        top--;
    }
}
int gettop(){
    if(top == -1){
        cout<<"there is no element in the stack"<<endl;
    }else{
        return arr[top];
    }
    return 0;
}
int getsize(){
    return top+1;

}
bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }


}
};
int main(){
   
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.isEmpty()){
        cout<<s.gettop()<<" ";
        s.pop();

    }
    cout<<s.getsize()<<endl;
    return 0;
}

