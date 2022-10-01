void printPatt(int n)
{
    //write your code here
    int d = n/2;
    for(int i=1;i<=n;i++){
        cout << "*";
    }
    cout << "\n";
    for(int i=d;i>1;i--){
        for(int j=i;j>=1;j--){
            cout << "*";
        }
        for(int j=2*(d-i)+1;j>=1;j--){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << "*";
        }
        cout << "\n";
    }
    if(n%2 == 1){
        cout << "*";
    for(int i=2;i<=n-1;i++){
        cout << " ";
    }
    cout << "*" << "\n";

    }
    else{
        cout << "*";
    for(int i=2;i<=n;i++){
        cout << " ";
    }
    cout << "*" << "\n";

    }
    
    for(int i=1;i<d;i++){
        for(int j=i+1;j>=1;j--){
            cout << "*";
        }
        for(int j=2*(d-i)-1;j>=1;j--){
            cout << " ";
        }
        for(int j=i+1;j>=1;j--){
            cout << "*";
        }
        cout << "\n";
    }
    
    for(int i=1;i<=n;i++){
        cout << "*";
    }
    
}



Sample Input :
9
Sample Output :
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
