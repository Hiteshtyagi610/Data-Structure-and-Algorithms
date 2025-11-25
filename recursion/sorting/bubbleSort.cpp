#include<iostream>// bubble sort 
using namespace std;

void bubbleSort(int *arr,int size){

    if(size==0||size==1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){swap(arr[i],arr[i+1]);}
        
    }

   return bubbleSort(arr,size-1);

}

int main(){
    int arr[6]={3,2,5,4,7,11};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
}