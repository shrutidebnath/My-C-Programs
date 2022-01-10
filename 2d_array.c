//printd 5 random nos in each row and at the end the 5nos print its total 
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int a[5][5];
 int i,j,total;


    // initiate random seed
    srand(time(NULL));

    // fill array with random numbers and calculate total for each row
    for(i=0; i < 5; i ++)   //loop for row
    {
        total = 0;
        for(j=0; j < 5; j++)  //loop for column
        {
            a[i][j] = rand() % 100;
            total += a[i][j];
            printf("%d \t", a[i][j]);
        }
        printf("%d\n",total);
    }
return 0;
}
