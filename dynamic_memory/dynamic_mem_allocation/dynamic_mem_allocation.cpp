
#include<iostream>
using namespace std;

int sum(int *arr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    char*ch= new char;//for char naming is not there
    int n;
    cin>>n;
    int*arr=new int[n];//for array

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=sum(arr,n);
    cout<<ans;

    delete []arr;
    delete ch;
}