#include<iostream>
using namespace std;

char max_occur(string s){
    int arr[26]={0};
    
    for(int i=0; i<s.length();i++){
        char ch= s[i];
        int number=0;
        if(ch>='a'&&ch<='z'){
            number=  ch-'a';
        }
        else{
            number= ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1, ans=0;
    for(int i=0; i<26;i++){
        if(arr[i]>maxi){
            ans=i;
            maxi=arr[i];
        }

    }
    char finalanswer= ans+'a';
    return finalanswer;
}

int main(){
       string s;

    cout<<"enter your string: "<<endl;
    cin>> s;

    cout<<"max count is "<< max_occur(s);


}