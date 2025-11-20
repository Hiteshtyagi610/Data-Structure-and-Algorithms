#include<iostream>
#include<climits>
using namespace std;
bool search(int arr[],int size, int number){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==number){
            return true;
        }       
    }    
return false;
}
int main(){
    int number, num[20]={1,22,32,43,53,23,2,44,3,4,5,7,9,11,12,57,48,70,69,24};
cout << "Enter the number you want to search: ";
cin >> number;
bool ans= search(num,20,number);
if(ans){
cout<<"number"<<" "<<number<<" "<<"is present";
}
else{
    cout<<"number"<<" "<<number<<" "<<"is not present";
}

       return 0;
}