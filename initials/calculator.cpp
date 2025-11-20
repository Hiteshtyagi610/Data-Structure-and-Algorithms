#include<iostream>
using namespace std;
int main(){
 int a,b;
 char ch;
cout<<"enter the value of first number"<<endl;
cin>>a;
cout<<"enter the value of second number"<<endl;
cin>>b;
cout<<"enter the opertion you want to do from list(+,-,*,/,&)"<<endl;
cin>>ch;
 
switch (ch)
{
case '+':
    cout<<"answer is"<<" "<<a+b<<endl;
    break;
case '-':
    cout<<"answer is"<<a-b<<endl;
    break;

 case '*':
    cout<<"answer is"<<a*b<<endl;
    break;
  case '/':
    cout<<"answer is"<<a/b<<endl;
    break; 
    case '%':
    cout<<"answer is"<<a%b<<endl;
    break; 
    }
    return 0;
}