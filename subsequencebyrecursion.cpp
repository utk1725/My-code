#include <iostream>
using namespace std;
void printsubsequences(string str,string output, int i){
    //base case
    if(i>= str.length()){
        cout <<output<<endl;
        return ;
    }
    //exclude case
    printsubsequences(str,output,i+1);
    //include case
    //adding the character to the string 
    output.push_back(str[i]);
    printsubsequences(str,output,i+1);
}

int main(){
string str = "abc";
string output = "";
int i = 0;
printsubsequences(str,output,i);
    return 0;
}
