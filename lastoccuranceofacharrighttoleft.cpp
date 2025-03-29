#include<iostream>
using namespace std;
 void lastoccRTL(string &s,char x,int i,int &ans){
    //base case
    if(s[i]==0){
        return ;
    }
    if(s[i]==x){
        ans = i;
        return ;
    }
    lastoccRTL(s, x, i-1 ,ans);

 }

int main(){
    string s;
    char x;
    cin >>s;
    cin >>x;
    int ans = -1;

    lastoccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;
    return 0;
}
