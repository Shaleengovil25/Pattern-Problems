#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void contalpha(int n)
{
    int i = 1, j = 0;
    int num = 65;
    char alpha = char(num);
    while (i <= n)
    {
        while (j <= i - 1)
        {
            cout << alpha << " ";

            // incrementing alpha value in every
            // iteration so as it can assign to
            // next character
            alpha++;
            j++;
        }
        j = 0;
        i++;

        // Ending line after each row
        cout << endl;
    }
}

// Driver Code
int main()
{
    int n = 5;

    // Function Call
    contalpha(n);
    return 0;
}