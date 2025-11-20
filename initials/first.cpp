#include<iostream>
#include<cmath>

using namespace std;
int main(){  
 int n,m,digit,mask=0,ans;
cout<<"enter the value of n"<<endl;
cin>>n;
m=n;
cout<<endl;
       
   while(m!=0){
      mask=(mask<<1)|1;

      m=m>>1;
   }
 cout<<endl;
     cout<<"mask is"<<mask;
      cout<<endl;        
ans =  (~n) & mask;
     cout<<"answer is"<<" "<<ans;
    return 0;
}




/* 
 program for reverse an integer(my)

 
     int n,digit;
   cout<<"enter the value of n"<<endl;
cin>>n;
   while(n!=0){
         digit=n%10;
         n=n/10;
         cout<<digit;
   }



      program for count 1 in bit 
       int n, count=0;
   cout<<"enter the value of n"<<endl;
cin>>n;
   while (n>0)
   {
          if (n&1)
          {
          count++;
          }
          n=n>>1;
             }
   
cout<<count;







      program for prod-sum of digits
       int n,sum=0,prod=1,digit;
cout<<"enter the value of n"<<endl;
cin>>n;
while (n!=0)
{ 
     digit= n%10;
     prod= prod*digit;
     sum=sum+digit;
     n=n/10;
}
int answer= prod-sum;
cout<<answer;



  program for prime or not

       int i=2,n,sum=0;
cout<<"enter the value of n"<<endl;
cin>>n;
bool isPrime=1;
for(i=2;i<n;i++){
 if((n%i)==0){
     isPrime=0;
   break;
 }
}

if(isPrime==0){cout<<"number is not prime";}


if(isPrime!=0){cout<<"number is prime";}






 program for fibonacci series
   int n,sum=0,first=0,last=1;
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<first<<"  "<<last<<"  ";
for(int i=0;i<=n;i++){
            sum=first+last;
           cout<<sum<<"  ";
              first=last;
              last=sum;
            }






program for sum of n integers using for loop

int n,sum=0;
cout<<"enter the value of n"<<endl;
cin>>n;
for(int i=0;i<=n;i++){
            sum=sum+i;




}

cout<<"sum is"<<sum<<endl;
cin>>n;






program for the pattern A
                        B C
                        C D E
                        D E F G 
while (i<=n){
   
    int j=1;
   
    while (j<=i)
{
   char ch='A'+i+j-2;
   cout<<ch<<" ";
   
   j++;

}

cout<<endl;

  i++; 
}






program for the pattern A
                        B C
                        D E F
 int i=1,n;
 cout<<"enter the value of n"<<endl;
cin>>n;
char ch='A';

while (i<=n){
    int j=1;
   
    while (j<=i)
{
   cout<<ch<<" ";
   ch=ch+1;
   j++;

}


cout<<endl;
  i++; 
}


 







program for the pattern A
                        B B
                        C C C
int i=1,n;
 cout<<"enter the value of n"<<endl;
cin>>n;
char ch='A';

while (i<=n){
    int j=1;
   
    while (j<=i)
{
   cout<<ch<<" ";
   
   j++;

}
ch=ch+1;

cout<<endl;
  i++; 
}





 program for the pattern A B C 
                         A B C
                         A B C
    int i=1,j,n;
  
 cout<<"enter the value of n"<<endl;
cin>>n;

 while (i<=n){
  j=1;
   char ch='A';
    while (j<=n)
    {
       
      cout<<ch<<" ";
            ch=ch+1;
      j++;
    }

    cout<<endl;
    
    
    i++;
 }






program for the pattern A B C
                        D E F
                        G H I
    int i=1,j,n;
  
 cout<<"enter the value of n"<<endl;
cin>>n;
 char ch='A';
 while (i<=n){
  j=1;
    while (j<=n)
    {
       
      cout<<ch<<" ";
            ch=ch+1;
      j++;
    }

    cout<<endl;
    
    
    i++;
 }






program for the pattern A A A
                        B B B
                        C C C

int i=1,j,n;
  
 cout<<"enter the value of n"<<endl;
cin>>n;
 char ch='A';
 while (i<=n){
  j=1;
    while (j<=n)
    {
       
      cout<<ch<<" ";
    
      j++;
    }
    cout<<endl;
    ch=ch+1;
    i++;
 }




program for the pattern 1
                        2 1
                        3 2 1
int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
    int val=i;
     while(j<=i){
        
        cout<<val<<" ";
        val=val-1;
      
  j++;
}

cout<<endl;
   i++;}







program for the pattern 1
                        2 3
                        3 4 5
             int i=1,num=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
    int val=i;
     while(j<=i){
        
        cout<<val<<" ";
        val=val+1;
      
  j++;
}

cout<<endl;
   i++;}
    





   program for the pattern 1
                           2 3
                           4 5 6
          int i=1,num=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
     while(j<=i){
        cout<<num<<" ";
        num=num+1;
      
  j++;
}

cout<<endl;
   i++;}
    






     program for pattern 1
                         2 2
                         3 3 3
          int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
     while(j<=i){
        cout<<i<<" ";
      
  j++;
}
cout<<endl;
   i++;}





 program for the pattern *
                         * *
                         * * *
                         
       int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
     while(j<=i){
        cout<<"*"<<" ";
      
  j++;
}
cout<<endl;
   i++;}





   program for pattern 1 2 3
                       4 5 6
                       7 8 9
          int i=1,n,num=1;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
     while(j<=n){
        cout<<num<<" ";
        num=num+1;
  j++;
}
cout<<endl;
   i++;}







 program for the pattern  4 3 2 1
                          4 3 2 1
                          4 3 2 1
                          4 3 2 1

         int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=n;
     while(j>=1){
        cout<<j;
  j--;
}
cout<<endl;
   i++;}










  program for the pattern 1 2 3 4
                          1 2 3 4
                          1 2 3 4
                          1 2 3 4 
      int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while (i<=n){ 
    int j=1;
     while(j<=n){
        cout<<j<<" ";
  j++;
}
cout<<endl;
   i++;
}







  program for pattern 1 1 1
                      2 2 2
                      3 3 3

     int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

    while (i<=n){  
        int j=1;
        while (j<=n){
          cout<<i<<" ";
            j++;
    }
    cout<<endl;
       i++;
    }
    




     program for pattern * * * 
                         * * *
                         * * *

     int i=1,n;
cout<<"enter the value of n"<<endl;
cin>>n;

    while (i<=n){  
        int j=1;
        while (j<=n){
          cout<<"*"<<" ";
            j++;
    }
    cout<<endl;
       i++;
    }
    



program for finding number is prime or not

 int i=2 ,n;
cout<<"enter the value of n"<<endl;
cin>>n;
for(i;i<n;i++)
{
 if((n%i)==0){

cout<<"n is not prime";
    }
    else if((n%i)!=0){
       cout<<"n is prime ";
    }
}








program for sum of even integers

int i=0,sum=0,n;
cout<<"enter the value of n"<<endl;
cin>>n;

while(i<=n){

      sum=sum+i;
 
i=i+2;
}
cout<<"sum of even integers upto "<<n <<" is "<<sum<<endl;




program for sum of n integers

int i=0,sum=0,n;
cout<<"enter the value of n"<<endl;
cin>>n;




while(i<=n){
    sum=sum+i;

i++;
}

cout<<"sum of "<<n<<" integers is "<<sum<<endl;


program for finding char type

  char ch;
  cout<<"enter the value of ch:"<<endl;
  cin>>ch;
  
if(ch>='a' && ch<='z'){
    cout<<"this is lower";
}
else if(ch>='A' && ch<='Z'){
    cout<<"this is upper";
}
else if(ch>='0' && ch<='9'){
    cout<<"this is number";
}*/