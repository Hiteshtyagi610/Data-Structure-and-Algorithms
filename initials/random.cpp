#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
cin>>n;
int i=0,sum=0;
while (i<=n)
{ if((i%2)==0){sum=sum+i;}    
    i++;
}
cout<<sum;
}







/*#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
cin>>n;
int i=0,sum=0;
while (i<=n)
{
    sum=sum+i;
    i++;
}
cout<<sum;
}*/






/*#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
char ch;
cout<<"enter the character: ";
cin>>ch;
int a= int(ch);
if (a>=97&&a<=122)
{
    cout<<"small alphabet";
}
else if (a>=65&&a<=90)
{
    cout<<"Caps";
}
else if (a>=48 && a<=57)
{
    cout<<"numbers";
}


}*/