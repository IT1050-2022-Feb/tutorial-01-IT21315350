/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
      int i,N,sum;
     
    /*read value of N*/
    printf("Enter the value of N: ");
    scanf("%d",&N);
     
    /*set sum by 0*/
    sum=0;
     
    /*calculate sum of the series*/
    for(i=1;i<=N;i++)
        sum= sum+ i;
     
    /*print the sum*/
     
    printf("Sum of the series is: %d\n",sum);
  
  return 0;
}

