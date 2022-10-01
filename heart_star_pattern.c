// C program to print the heart star pattern

#include <stdio.h>
#include <math.h>
 
int main()
{
    // set output size
    int size = 10;
 
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y <= 4*size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3*size, 2));
 
            if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
 
    for (int x = 1; x < 2*size; x++)
    {
        for (int y = 0; y < x; y++) {
            printf(" ");
        }
 
        for (int y = 0; y < 4*size + 1 - 2*x; y++) {
            printf("*");
        }
 
        printf("\n");
    }
 
    return 0;
}
