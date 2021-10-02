#include <stdio.h>
#include <string.h>

// create magic square
void createSquare(int n)
{
   int magicSquare[n][n];
   memset(magicSquare, 0, sizeof(magicSquare));
   int a = n / 2; //initializing position
   int b = n - 1;

   for (int num = 2; num <= n * n;) {
       if (a == -1 && b == n) 
       {
           b = n - 2;
           a = 0;
       }
       else {

           if (b == n)
               b = 0;

           if (a < 0)
               a = n - 1;
       }
       if (magicSquare[a][b]) 
       {
           b -= 2;
           a++;
           continue;
       }
       else
           magicSquare[a][b] = num++; 

       b++;
       a--; 
   }

   // Print  The sum of each row, each column, and each diagonal all add up to the same number.
   printf("n=%d:\nSum of each row, each column,and each diagonal n is %d:\n",
       n, n * (n * n + 1) / 2);
   for (a = 0; a < n; a++) {
       for (b = 0; b < n; b++)
           printf("%3d ", magicSquare[a][b]);
       printf("\n");
   }
}
// test 
int main()
{
   int n =3; // 3 by 3 matrix (3 rows, 3 columns) can be changed
   createSquare(n);
   return 0;
}
