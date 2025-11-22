#include<iostream>
using namespace std;

bool linear_search(int arr[],int size,int target){// linear search using recursion 
    
      if(size==0){
        return false;
              }
      if(arr[0]==target){
        return true;
      }
      else{
        return linear_search(arr+1,size-1,target);
      }
    
    
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int target=6;
    bool ans=linear_search(arr,6,6);
    cout<<ans;
}