// Program to form  butterfly using  *


# include <iostream> 
  using namespace std;
  int main (){
    int r;
    cin>>r;
    // use of nested loop
    for (int i=1 ; i<= r ; i++)
    {
      for(int j=1 ; j<=i ; j++)
        cout <<"* ";
        for(int j = 2*(r-i) ; j>0 ; j--) {  // logic for pattern
            cout <<"  " ;
         }
      for(int j=1;j<=i;j++)
        cout <<"* " ;
        cout <<endl;
       }

      for(int i=1; i<r; i ++)
     {
        for(int j=r-i ; j>0 ; j--)
         cout <<"* " ;
        for(int j=1;j<=2*i ;j++)
         cout <<"  " ;
    
          for(int j=r-i ; j>0; j--)
          {
             
               cout <<"* ";
           }
       cout << endl;
      }
     return 0;

}

