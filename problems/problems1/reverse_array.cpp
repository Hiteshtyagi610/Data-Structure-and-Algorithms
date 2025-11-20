#include<iostream>
using namespace std;

int main(){
    int arr[5]={11,7,3,12,4};
    
   for(int i=0;i<5;i++){
    cout<<arr[i]<<"  ";
   }
    
   cout<<endl;
   int s=0,e=4;
   int temp;
   while(s<=e){
    // swap(arr[s],arr[e]);
    temp= arr[s];
    arr[s]=arr[e];
    arr[e]=temp;

    s++;
    e--;
   }

   for(int i=0;i<5;i++){
    cout<<arr[i]<<"  ";
   }
    
}