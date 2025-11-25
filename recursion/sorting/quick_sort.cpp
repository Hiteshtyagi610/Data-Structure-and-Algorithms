#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot)cnt++;        
    }
   int pivotIndex=s+cnt;
   swap(arr[pivotIndex], arr[s]);
   int i=s,j=e;
   while(i<pivotIndex&&j>pivotIndex){
    while(arr[i]<arr[pivotIndex]){
     i++;
    }
    while(arr[j]>arr[pivotIndex]){
     j--;
    }
    if(i<pivotIndex && j>pivotIndex){
  swap(arr[i++],arr[j--]);
    }
   }
   return pivotIndex;
}

void sort(int arr[],int s,int e){
    if(s>=e) return;
    int part=partition(arr,s,e);

    sort(arr,s,part-1);
    sort(arr,part+1,e);
    

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