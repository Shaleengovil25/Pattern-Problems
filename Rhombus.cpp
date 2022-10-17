//Problem:
//for input  r , print a star pattern of rhombus

//Example:
// for r=5, output should be

//       * * * * * 
//        * * * * *
//         * * * * *
//          * * * * * 
//           * * * * *

//Code:


#include<iostream>
using namespace std;

int main(){
    int r;
  //enter number of rows or columns 
    cin>>r;
  
  //printing rhombus
    for(int i=1;i<=r;i++){
        for(int j=1;j<=(r+i);j++){
            cout<<" ";
        }
        for(int j=1;j<=r;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
