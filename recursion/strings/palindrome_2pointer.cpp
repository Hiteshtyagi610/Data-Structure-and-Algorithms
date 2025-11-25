#include<iostream>// palindrome using recursion
using namespace std;

bool palindrome(string& s,int i,int j){
     if(i>j) return true;

     if(s[i]!=s[j]){
        return false;
     }
    return palindrome(s,i+1,j-1);

}

int main(){
    string s1="abcabc";
    string s2="abba";
    
  
    int n1=s1.length();
    int n2=s2.length();
    bool ans1=palindrome(s1,0,n1-1);
    bool ans2=palindrome(s2,0,n2-1);
    cout<<ans1<<endl<<ans2;
}