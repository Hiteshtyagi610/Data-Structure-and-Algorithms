#include<iostream>// bubble sort 
using namespace std;

void merge(int arr[],int s,int e,int mid){
    int len1=mid-s+1;
    int len2=e-mid;

    int *arr1= new int[len1];
    int *arr2= new int[len2];

    int index1=0;int index2=0;
    int mainindex=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[mainindex++];
    }
    mainindex=mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=arr[mainindex++];
    }
    mainindex=s;
    while(index1<len1&&index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[mainindex++]=arr1[index1++];
        }
        else{
            arr[mainindex++]=arr2[index2++];
        }
    }
    while(index1<len1){
        arr[mainindex++]=arr1[index1++];
    }
    while(index2<len2){
        arr[mainindex++]=arr2[index2++];
    }
    
}

void Sort(int *arr,int s,int e){
    if(s>=e)return;
    
    int mid=s+((e-s)/2);
    Sort(arr,s,mid);
    Sort(arr,mid+1,e);     
    merge(arr,s,e,mid);
}
int main(){
    int arr[6]={3,2,5,4,7,11};
    Sort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
}