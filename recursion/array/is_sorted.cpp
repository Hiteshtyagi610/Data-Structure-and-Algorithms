#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){//check sorted array using recursion
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }
}

int main(){
    int arr[6]={2,4,6,9,8,13};
    bool ans=isSorted(arr,6);
    cout<<ans;

}