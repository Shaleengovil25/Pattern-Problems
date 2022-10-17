//Problem
//for a given input r, print hollow rhombus star pattern of r rows and r columns

//Example:
//for n=5, output should be

//         * * * * * 
//       *       *
//     *       *
//   *       *
// * * * * *

//Code:

#include<iostream>
using namespace std;
int main(){
     int r;
  
  //enter number of rows or columns
    cin>>r;
  
  //printing the hollow rhombus
    for(int i=1;i<=r;i++){
        for(int j=1;j<=(r-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=c;j++){
            if(i==1||i==r||j==1||j==c){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
