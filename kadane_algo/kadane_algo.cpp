#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={-1,-2,-33,-4,-5};
    int max_sum=INT_MIN;
    int sum=0;
    for(int s=0;s<5;s++){
        sum+=arr[s];
        if(sum<0) sum=0;
        max_sum=max(max_sum,sum);        
        
    }
    cout<<max_sum;
}