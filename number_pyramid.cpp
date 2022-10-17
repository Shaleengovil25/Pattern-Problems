//Problem 
//for a given input n, print a number pyramid

//Sample:
//for n=5, output should be

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

//Code:

#include<iostream>
using namespace std;
int main(){
    int r;
  
  //Enter the number of rows in the pyramid
    cin>>r;
  
  //printing the pyramid
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i>=j){
                cout<<i<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}

