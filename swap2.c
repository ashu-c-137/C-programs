// Swaping values of two variables without using a 3rd variable

#include <stdio.h>
int main () {
    int a,b;
 
    printf("======================================\n");
    printf("== Problem Solved By Ashutosh Dubey ==\n");
    printf("======================================\n");

    printf("Enter two numbers... ");
    scanf("%d%d",&a,&b );
    
    printf("\ncurrent values of a & b: %d %d ", a, b);

    a = a + b;
    b = a - b;
    a = a - b; 
    
    printf("\nswaping values without using 3rd variable: %d %d", a, b);
    
   return 0;
}