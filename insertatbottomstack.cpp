#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();
    //rec cal
    solve(s,target);
    //backtrack
    s.push(topelement);
}

void insertatbottom(stack<int> &s){
    if(s.empty()){
        cout<< "stack is empty,cant insert at bottom"<<endl;
        return ;
    }
    int target = s.top();
    s.pop();
    solve(s,target);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertatbottom(s);

    cout<< "printing" <<endl;
    while(!s.empty()){
        cout<< s.top()<< " ";
        s.pop();
    }
    cout<< endl;


    return 0;
}
 