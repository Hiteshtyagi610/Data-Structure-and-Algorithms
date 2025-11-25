#include<iostream>
using namespace std;

void merge(int arr[],int s,int mid,int e){
    int len1=mid-s+1;
    int len2=e-mid;

    int *left=new int[len1];
    int *right=new int[len2];
  
    int mainIndex=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[mainIndex++];
    }
    mainIndex=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[mainIndex++];
    }
 int leftIndex=0;int rightIndex=0;
    mainIndex=s;
    while(leftIndex<len1&&rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainIndex++]=left[leftIndex++];
        }
        else{
            arr[mainIndex++]=right[rightIndex++];
        }
    }
    while(leftIndex<len1){
        arr[mainIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainIndex++]=right[rightIndex++];
    }
    delete[] left;
    delete[] right;
}

void sort(int arr[],int s,int e){
    if(s>=e) return ;

    int mid=(s+e)/2;

    sort(arr,s,mid);
    sort(arr,mid+1,e);

    merge(arr,s,mid,e);

}
int main(){
    int arr[10]={2,56,78,133,467,11,123,6,1,16};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    sort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"  ";
    }

}