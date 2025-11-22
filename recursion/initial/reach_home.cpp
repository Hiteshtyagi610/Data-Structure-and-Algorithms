#include<iostream> // example of reach home using recursion
using namespace std;

void reach_home(int source, int destination){
    cout<<"source: "<<source<<" destination "<<destination<<endl;
     if(destination==source){// base case
        cout<<"reached";
        return ;
     }
     source++;//processing
     reach_home(source, destination);// recursive relaton

}
int main(){
    int destination=10;
    int source=0;
    reach_home(source, destination);
}

//  void reach_home(int distance, int step){
//      if(distance==-1){
//         return ;
//      }
//      cout<<distance<<"  ";
//      distance= distance - step;
          
//     reach_home(distance, step);

// }

// int main(){
//     int distance=10;
//     int step=1;
//     reach_home(distance, step);
// }
