// prog to do basic arithmatic operations

#include <stdio.h>
int main () {
    int a,b,r;
 
    printf("======================================\n");
    printf("== Problem Solved By Ashutosh Dubey ==\n");
    printf("======================================\n");

    printf("Enter two numbers... ");
    scanf("%d%d",&a,&b );
    
    r = a + b;
    printf("\nsum: %d", r );
    
    if (a>b)
        r = a - b;
    else
        r = b - a;
        
    printf("\ndifference: %d", r ); 
    r = a * b;
    
    printf("\nproduct: %d", r );
    
    if (a>b)
        r = a / b;
    else
        r = b / a;
    
    printf("\nquotient: %d", r );
    if (a>b)
        r = a % b;
    else
        r = b % a;
    printf("\nremainder: %d", r );
 
    return 0;
}
