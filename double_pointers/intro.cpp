#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *p=&num;
    int **p2=&p;
    int ***p3=&p2;

    cout<<num<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl<<endl;

    cout<<&num<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl<<endl;

    cout<<&p2<<endl;
    cout<<p3<<endl;
    cout<<***p3<<endl<<endl;
    
}