#include <bits/stdc++.h>
using namespace std;
class B
{
int b;
public: B(){}
B(int i){
b = i;
}
int show(){
return b; }
};
class C {
B b; public:
C(int i){
b = B(i);
}
friend void show(); };
void show() {
C c(10);
cout<<"value of b is: "<<c.b.show()<<endl; }
int main(int argc, char const *argv[]) {
show();
return 0; }
