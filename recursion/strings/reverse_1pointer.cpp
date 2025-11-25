#include<iostream>// reverse string orignally
using namespace std;
void reverse(string& s,int n,int i){    
    if(i>=n/2) return ;
    
    swap(s[i],s[n-i-1]);
    reverse(s,n,i+1);

}
int main(){
    string s="abcde";    
    int  n=s.length();   
    cout<<s;    
    cout<<endl<<endl;   
    reverse(s,n,0);
    cout<<s;
}