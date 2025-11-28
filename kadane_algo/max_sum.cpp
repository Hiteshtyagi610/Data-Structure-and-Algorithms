#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={1,2,-33,4,5};
    int max_sum=INT_MIN;
    for(int s=0;s<5;s++){
        int sum=0;
        for(int e=s;e<5;e++){
            sum=sum+arr[e];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum;
}