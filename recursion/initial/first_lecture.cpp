#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;// base case
    
    
    return n*fact(n-1);//recursion
}
 
int main(){//factorial
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans;

}