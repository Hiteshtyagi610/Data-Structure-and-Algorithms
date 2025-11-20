#include<iostream>
#include <algorithm>
#include <vector> 
using namespace std; 

bool isPossible(vector<int>& arr,int k, int mid){
    int cowCOunt=1;
    int position= arr[0];
     for (int i = 1; i < arr.size(); i++)
     {
        if((arr[i]-position)>=mid){
            cowCOunt++;
            if (cowCOunt>=k){
                return true;}
            
            position=arr[i];

        }
     }
     

return false;
}
int main(){
   vector<int> arr={4,2,1,3,6};
   int k=2;
    sort(arr.begin(),arr.end());
    int maxi=-1;
    for(int i=0;i<arr.size();i++){
    maxi= max(maxi,arr[i]);
    }

    int s=0,e=maxi;
    int mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(isPossible(arr,k,mid)){
           ans=mid;
           s=mid+1;
        }
        else{e=mid-1;}
    }
    cout<<ans;
    return ans;
}