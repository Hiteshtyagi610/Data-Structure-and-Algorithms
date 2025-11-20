#include<iostream>
using namespace std;

void maxsum(int arr[][3], int row, int col){
    int max=-1;
    int rowIndex=0;
    for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<3;col++){
        sum=sum+arr[row][col];
    }
    cout<<"sum of row "<<row<<" is "<<sum<<endl;
    if(sum>max){
        max=sum;
        rowIndex=row;
    }

  }
  cout<<"maximum sum is "<<max<<" at row "<<rowIndex+1;
}





int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  for(int i=0;i<3;i++){
    
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  maxsum(arr,3,3);

  
  
}