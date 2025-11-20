#include<iostream>
using namespace std;

void colsum(int arr[][3], int row, int col){
    for(int col=0;col<3;col++){
    int sum=0;
    for(int row=0;row<3;row++){
        sum=sum+arr[row][col];
    }
    cout<<"sum of col "<<col<<" is "<<sum<<endl;
  }
}

void rowsum(int arr[][3], int row, int col){
    for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<3;col++){
        sum=sum+arr[row][col];
    }
    cout<<"sum of row "<<row<<" is "<<sum<<endl;
  }
}



int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  for(int i=0;i<3;i++){
    
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  colsum(arr,3,3);
  cout<<endl;
  cout<<endl;
  cout<<endl;
 rowsum(arr,3,3);
  
  
}