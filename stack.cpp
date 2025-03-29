#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(10);
    s.push(30);
    s.push(90);

    s.pop();

    cout<<"element on the top is:" <<s.top()<<endl;

    cout<<"the length of the stack is:"<<s.size()<<endl;

    if (s.empty()){
        cout<<"the stack is empty"<<endl;
    }
    else
    cout<<"the stack is not empty"<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}