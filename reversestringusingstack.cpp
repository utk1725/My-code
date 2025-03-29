#include<iostream>
using namespace std;

int main(){
    string str = "babbar";
    stack<char> s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}