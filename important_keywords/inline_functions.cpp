#include<iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return  a>b?a:b;

}
int main(){
    //inline function reduces extra time and memory
    // inline function can be used for function with one line body
    // it makes the function results and copy ready before compilation
    int a=2;int b=3;
    int ans= getMax(a,b);
    cout<<ans<<endl;
    a=5;b=4;
    ans= getMax(a,b);
    cout<<ans<<endl;

}