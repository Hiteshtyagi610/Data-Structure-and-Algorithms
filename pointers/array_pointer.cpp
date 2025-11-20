#include<iostream>
using namespace std;

int main(){
    // int arr[10]={2,5,6};
    // cout<<arr<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<(arr+4)<<endl;
    // cout<<(*arr)+1<<endl;

    // int i= 2;
    // cout<<i[arr]<<endl;
    

    // int a[10]={1,2,3,4,5};
    // cout<<a<<endl;
    // // cout<<&a[0]<<endl;
    // // cout<<&a<<endl;//all give same value
    // int *ptr=a;
    // cout<<ptr<<endl;//stores the address of arr[0]
    // cout<<&ptr<<endl;// stores the address of pointer 

    int arr[10]={1,2,3,4,5};
    //give error arr=arr+1;
    cout<<arr<<endl;
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    
}