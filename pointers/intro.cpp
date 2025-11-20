#include<iostream>
using namespace std;

int main(){
    
    int num=5;
    double d=5.5;
    int *ptr=&num;
    double *p=&d;

    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<sizeof(num)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;

    cout<<d<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<sizeof(d)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    

    // int num=5;
    // int *p=&num;
    // cout<<num<<endl;
    // (*p)++;
    // cout<<num<<endl;

}