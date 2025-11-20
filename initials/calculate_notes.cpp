#include<iostream>
using namespace std;
int main(){
 int amount,note,choice=1;
 cout<<"enter the value of amount"<<endl;
cin>>amount;
while (amount>0 && choice<=7)
{   switch (choice)
{
case 1: note=100;break;
case 2:note=50;break;
case 3:note=20;break;
case 4:note=1;break;
}
if (amount>=note)
{ int count =amount/note;
    amount = amount%note;
    cout<<"number of note of ruppees"<<" "<<note<<" is "<<count<<endl;
}
choice++;    
}
   return 0;
}