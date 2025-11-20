#include<iostream>
using namespace std;

int main(){
    char arr[]="abcde";
    char *ptr=&arr[0];
    cout<<ptr;

    ptr++;
    cout<<ptr;
}