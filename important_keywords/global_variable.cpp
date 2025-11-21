#include<iostream>
using namespace std;

int Score=15;//exist globally for all functions // but it is a bad practice use reference variable
void a(int&i){// passing it as a reference not copying it
    i++;
    cout<<Score<<"in a"<<endl;
    int j=0; //life in this block only

}
void b(int&i){
i++;
cout<<Score<<"in b"<<endl;
int j=0;//life in this block only
}

int main(){
    int i=5;//life in this block only
    a(i);
    cout<<i<<endl;
    b(i);
    cout<<i<<endl;
    cout<<Score<<"in main"<<endl;
}