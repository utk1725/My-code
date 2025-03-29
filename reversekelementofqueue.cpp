#include <iostream>
#include<stack>
#include<queue>
using namespace std;

void reversek(queue<int> &q, int k){

    stack<int> s;
    int count = 0;
    int n = q.size();
    if(k <= 0||k>n)
    return ;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count ++;

        if(count ==k)
        break;
    }
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k)
        break;
    }
}
int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    reversek(q,5);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}