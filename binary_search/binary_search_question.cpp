#include<iostream>
using namespace std;

int binarySearch(int arr[],int s, int e, int find){
  
while(s<=e){
    int mid= (s+e)/2;
       if(arr[mid]==find){
        return mid;
       }
       if (arr[mid]>find){
           e=mid-1;
       }
if (arr[mid]<find){
    s=mid+1;
}
}
return -1;

  return -1;
}
int getPivot(int arr[], int n){
  int s=0,e=n-1;
  int mid;
  while(s<e){
    mid= (s+e)/2;
     if(arr[mid]>=arr[0]){
           s=mid+1;
     }
   else{  e=mid;
   }
  }
  return s;
}




int search(int arr[], int n, int find){
int pivot_index= getPivot(arr,n);
if (arr[pivot_index] <= find && find <= arr[n-1]){
  return binarySearch(arr,pivot_index,n-1,find);
}
else{
 return binarySearch(arr,0,pivot_index-1,find);
}


return -1;}


int main(){
int  arr[5]={7,8,1,3,5};
int pivot_index= getPivot(arr,5);
int pivot_element=arr[pivot_index];
cout<<"the pivoted index is: "<<pivot_index;cout<<endl;
cout<<"the pivoted element is: "<<pivot_element;cout<<endl;

int ans=search(arr,5,5);
cout<<endl;
cout<<"the element is present at index: "<<ans;

return 0;
}








/*#include<iostream>
using namespace std;

int firstfind(int arr[], int n, int find){
  int s=0, l=n-1,ans=-1; 

  while(s<=l){
 int mid= (s+l)/2;
      if(arr[mid]==find){
                 ans = mid;
                 l=mid-1;
                     }
        else if (arr[mid]<find)
         {
            s=mid+1;
         }
        else if (arr[mid]>find)
         {
           l=mid-1;
         }
  }
return ans;
}
int lastfind(int arr[], int n, int find){
  int s=0, l=n-1,ans=-1;
 

  while(s<=l){
 int mid= (s+l)/2;
      if(arr[mid]==find){
                 ans = mid;
                 s=mid+1;
                     }
        else if (arr[mid]<find)
         {
            s=mid+1;
         }
        else if (arr[mid]>find)
         {
           l=mid-1;
         }
          


  }

return ans;
}

int main(){
 
 int arr1[7]={1,2,3,3,3,3,5};

int first_occuranse= firstfind(arr1,7,3);
cout<<first_occuranse;
int last_occuranse= lastfind(arr1,7,3);
cout<<endl<<endl;
cout<<last_occuranse;

}*/