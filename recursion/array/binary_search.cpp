#include<iostream>
using namespace std;

bool binary_search(int arr[],int start,int end, int target){// binary search using recursion 
    if(start>end){
        return false;
    }
    int mid=start+((end-start)/2);
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target){
        return binary_search(arr,start,mid-1,target);
    }
    else {
        return binary_search(arr,mid+1,end,target);
    }
    
    
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int target=9;
    bool ans=binary_search(arr,0,5,target);
    cout<<ans;
}