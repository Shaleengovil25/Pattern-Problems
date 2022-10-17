//Problem
//for a given input n, print a pyramid containing of numbers as given in the following example

//Example
// n=5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// Code:


 #include<iostream>
using namespace std;
int main(){
    int r;
  //Enter number of rows in the pyramid
    cin>>r;
  
  //Printing the pyramid
    for(int i=1;i<=r;i++){
        for(int j=r;j>=i;j--){
            cout<<(r-j+1)<<" "; 
        }
        cout<<endl;
    }
    return 0;
}
