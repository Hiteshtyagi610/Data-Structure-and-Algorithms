#include<iostream>
using namespace std;

void print(int arr[],int size,int start=0){// start default set to 0
    for(int i=start;i<size;i++){
       cout<<arr[i]<<endl;
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5,0);

}