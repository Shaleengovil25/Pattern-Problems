//Problem 
//for a given input n, print a pyramid containing alternate 1 and 0

//Example
//for  n=5, output should be

// 1         
// 0 1       
// 1 0 1     
// 0 1 0 1   
// 1 0 1 0 1

//Code 

#include<iostream>
using namespace std;
int main(){
    int r;
    //enter number of rows you want in the pyramid
    cin>>r;
  
    //printing the pyramid
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
