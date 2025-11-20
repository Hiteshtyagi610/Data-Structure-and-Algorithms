#include<iostream>
#include<climits>
using namespace std;

int sum(int arr[],int size){
int sum=0;
for (int i = 0; i < size; i++){
    sum = sum+arr[i];
}
return sum;
}

int main(){
    int size, num[100];
cout << "Enter the size of the array: ";
cin >> size;
for (int i = 0; i < size; i++)
{
    cout<<"enter the value at index "<<" "<<i;
    cin>>num[i];
    }
    int ans=sum(num,size);

cout<<"sum of all elements of array is "<<ans;
    return 0;
}


/*
function for max and min value in array
int ma (int num[], int size){
    int max= INT_MIN;
    for (int i = 0; i<= size; i++)
    { if (max< num[i])
    {
        max= num[i];
    }       
    }   
  
    return max;
}
int mi (int num[], int size){
    int min= INT_MAX;
     for (int i = 0; i<= size; i++)
    { if (min>num[i])
    {
        min= num[i];
    }       
    }  
  
    return min;
}
int main(){
int size, num[100];
cout << "Enter the size of the array: ";
cin >> size;
   for (int i = 0; i < size; i++){
    cout<< "enter the element at"<<""<<i<<" index:";
    cin >> num[i];
    
   }
   int biggest = ma(num, size);
   int smallest = mi(num, size);

   cout<<"biggest is "<<biggest;
   cout<<endl;
    cout<<"smallest is "<<smallest;

    return 0;
}

















*/