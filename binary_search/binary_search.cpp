#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int find){
int s=0,l=n-1;

while(s<=l){
    int mid= (s+l)/2;
       if(arr[mid]==find){
        return mid;
       }
       if (arr[mid]>find){
           l=mid-1;
       }
if (arr[mid]<find){
    s=mid+1;
}
}
return -1;
}
int main(){
 int arr1[5]={23,26,45,56,76};
 int arr2[6]={12,34,56,67,89,91};

int ans1=binary_search(arr1,5,45);
int ans2=binary_search(arr2,6,56);

 cout<<ans1<<"     " <<ans2;
return 0;
}

















/*
code for normal binary search


#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int find){
int first=0,last=n-1;
int mid= first + (last-first)/2;
while(first<=last){
   if (arr[mid]==find){
        return mid;
   }
   if (arr[mid]>find){
    first=mid+1;
   }
   
   if (arr[mid]<find){
    last=mid-1;
   }
   

mid= first + (last-first)/2;
}
return -1;
}

int main(){
      int find;
      int arr1[6]={11,22,23,35,55,57};      
      int arr2[7]={14,27,37,65,69,97,101};     
      cout<<"enter the number you want to search in first array"<<endl;
      cin>>find;
         
int index1=binarySearch(arr1,6,find);
int index2=binarySearch(arr2,7,find);

cout<<index1<<"   "<<index2;

    return 0;
}

*/