#include<iostream>
#include<stack>
using namespace std;
void insertsorted(stack<int> &s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return ;
    }
    int topelement=s.top();
    s.pop();

    insertsorted(s,target);

    s.push(topelement);
}
void sortstack(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int topelement = s.top();
    s.pop();

    sortstack(s);

    insertsorted(s,topelement);
}
int main(){
    stack<int>s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    sortstack(s);
    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0;



}