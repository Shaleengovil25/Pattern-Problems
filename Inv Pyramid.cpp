// Problem:
// for a given input n, print an inverted pyramid.

// Sample:
// for n = 6, output should be

// ***********
//  *********
//   *******
//    *****
//     ***
//      *

// Solution:
// time complexity is n2
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n;
	for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
	        cout << " ";
	    }
	    for(int j=2*n-1;j>2*i;j--){
	        cout << "*";
	    }
	    cout << endl;
	}
	return 0;
}
