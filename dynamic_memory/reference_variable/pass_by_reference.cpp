#include<iostream>
using namespace std;
void update1(int n){
    n++;
}
void update2(int&n){
    n++;
}
int main(){
    int n=5;
    cout<<n<<endl;
    update1(n);//pass by value
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;//pass by reference
}