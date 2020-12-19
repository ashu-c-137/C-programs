// Swaping values of two variables by using a 3rd variable

#include <stdio.h>
int main () {
    int a,b,temp;
 
    printf("======================================\n");
    printf("== Problem Solved By Ashutosh Dubey ==\n");
    printf("======================================\n");

    printf("Enter two numbers... ");
    scanf("%d%d",&a,&b );
    
    printf("\ncurrent values of a & b: %d %d ", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("\nnew values of a & b: %d %d ", a, b);

    return 0;

}

   