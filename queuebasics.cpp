#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    cout<<"size of the queue is "<<q.size()<<endl;

    q.pop();

    cout<<"size of the queue is "<<q.size()<<endl;


    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    cout<<"front element of queue is "<<q.front()<<endl;
    q.pop();

    cout<<"front element of queue is "<<q.front()<<endl;


return 0;
}