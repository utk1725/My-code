#include<iostream>
#include<vector>
using namespace std;
class animal{
    public:
    int age;
    string name;

    animal(){
        this->name="lion";
        this->age=0;
        cout<<"constructor called"<<endl;
    }

    void eats(){
        cout<< "he eats"<<endl;

    }
    void sleeps(){
        cout<<"he sleeps"<<endl;

    }
};
int main(){
    //dynamic memory
    animal*suresh= new animal;
    (*suresh).age = 15;
    (*suresh).name="cheta";
    //alternative way
    suresh->age=15;
    suresh->name="cheta";
    //static object
    animal a;
    //dynamic object
    animal *b=new animal;

    // animal ramesh;
    // ramesh.age = 12;
    // ramesh.name ="sher";
    // cout<<"age of ramesh is "<< ramesh.age<<endl;
    // cout<<"name of ramesh is "<<ramesh.name<<endl;

    // ramesh.eats();
    // ramesh.sleeps();

return 0;

}
