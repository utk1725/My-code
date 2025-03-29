#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();
    //rec cal
    insertatbottom(s,target);
    //backtrack
    s.push(topelement);

}

void reversestack(stack<int> &s){
    //base case
    if(s.empty()){
        return ;
    }

    int target = s.top();
    s.pop();

    reversestack(s);

    insertatbottom(s,target);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    
    reversestack(s);
    cout<< "printing" <<endl;
    while(!s.empty()){
        cout<< s.top()<< " ";
        s.pop();
    }
    cout<< endl;


    
    return 0;
}