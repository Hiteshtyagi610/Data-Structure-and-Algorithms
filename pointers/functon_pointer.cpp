#include<iostream>
using namespace std;

void update(int *p){
  p=p+1;
  cout<<"at function "<<p<<endl;
//   *p=*p + 1;
}

int main(){
    int num=5;
    int *p=&num;
    cout<<"before "<<p<<endl;
    cout<<"before "<<*p<<endl;

    update(p);
    cout<<"after "<<p<<endl;
    cout<<"after "<<*p<<endl;

}