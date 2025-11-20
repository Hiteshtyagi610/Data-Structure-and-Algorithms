#include<iostream>
using namespace std;

int linearsearch(int arr[3][4], int target, int row, int column){
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        if(arr[i][j]==target){
            return 1;
        }
    }}
    return 0;
}


int main(){
  int arr[3][4];
  cout<<"enter the value of matrix";
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
  }
  if(linearsearch(arr, 12, 3,4)){
    cout<<"found";
  }
  else{cout<<"not found";}
}