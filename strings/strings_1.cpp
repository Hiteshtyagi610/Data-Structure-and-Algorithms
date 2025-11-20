#include<iostream>
using namespace std;
int main(){}







/*#include<iostream>
using namespace std;
int getLen(char name[]){
    int len=0;
     for(int i=0; name[i] !='\0';i++){
         len++;   }
return len;
}

int palindrome(char name[], int len){
    int s=0;
    int e=len-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;e--;
        }
    }
    return 1;
}
int main(){
    char ch[20];
    cout<<"enter your name ";
    cin>>ch;

    int length= getLen(ch); 
    bool pal= palindrome(ch,length);
    cout<<pal;
}


#include<iostream>
using namespace std;
int getLen(char name[]){
    int len=0;
     for(int i=0; name[i] !='\0';i++){
         len++;   }
return len;
}
int main(){
    char ch[20];
    cout<<"enter your name ";
    cin>>ch;
    cout<<"your name is "<<ch<<endl;
    int length= getLen(ch);   
    int s=0;
    int e= length-1;
while(s<e){
    swap(ch[s],ch[e]);
    s++;e--;
}
  for(int i=0; ch[i] !='\0';i++){
         cout<<ch[i];
    }
}




#include<iostream>
using namespace std;
int main(){

    char ch[20];
    cout<<"enter yourname ";
    cin>>ch;
    cout<<"your name is "<<ch<<endl;
    int len=0;
    for(int i=0;ch[i]!='\0';i++){
      len++;
    }
cout<<len;
return 0;
}*/




