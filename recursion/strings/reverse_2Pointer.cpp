#include<iostream>// reverse string orignally
using namespace std;
void reverse(string& s,int i,int j){
    if(i>j) return ;    
    swap(s[i],s[j]);
    reverse(s,i+1,j-1);
}
int main(){
    string s="abcde";    
    int  n=s.length();   
    cout<<s;    
    cout<<endl<<endl;   
    reverse(s,0,s.length()-1);
    cout<<s;
}
// reverse using recursion without changing the string
/*#include<iostream>
using namespace std;

void reverse(string s,int n){
    if(n<0){
        return ;
    }
    cout<<s[n]<<"  ";
    reverse(s,n-1);

}
int main(){
    string s="abcde";
    
   int  n=s.length();
   for(int i=0;i<n;i++){
        cout<<s[i]<<"  ";
    }
    cout<<endl<<endl;
    reverse(s,n-1);


}
*/