#include<iostream>
using namespace std;

int main(){
    string s="abcde";
    
   int i=0;int j=s.length()-1;//int j=s.length() it will take null char too
    while(i<=j){
        swap(s[i],s[j]);
        i++;j--;
    }
cout<<i<<" "<<j<<endl;
 cout<<s;
}
