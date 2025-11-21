#include<iostream>
using namespace std;
void a(int&i){// passing it as a reference not copying it
    i++;
    int j=0; //life in this block only

}
void b(int&i){
i++;
int j=0;//life in this block only
}

int main(){
    int i=5;//life in this block only
    a(i);
    cout<<i<<endl;
    b(i);
    cout<<i<<endl;
}