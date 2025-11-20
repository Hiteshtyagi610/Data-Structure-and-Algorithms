#include<iostream>
using namespace std;

int main(){
    int first=6;
    int *p=&first;
    
    cout<<*p++<<endl;
    cout<<first<<endl;

}