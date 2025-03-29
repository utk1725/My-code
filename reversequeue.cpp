#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reversequeue(queue<int> &q){
    stack<int> s;

    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}
int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    reversequeue(q);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}