#include <stdio.h>

                    
int main() // function main so the execution can begin

{     
    int integer1, integer2, sum, difference, product, quotient, remainder; 
               // all the variables im using
                         
    printf("Enter first integer\n");    // prompt for integer1
    scanf("%d", &integer1);           

    printf( "Enter second integer\n" ); // prompt for integer2
    scanf("%d", &integer2);           

    sum = integer1 + integer2;          // math operations
    difference = integer1 - integer2;
    product = integer1 * integer2;
    quotient = integer1 / integer2;
    remainder = integer1 % integer2;
    
    printf( "Sum is %d\n", sum );       // printing the results
    printf( "Difference is %d\n", difference );
    printf( "Product is %d\n", product );
    printf( "Quotient is %d\n", quotient );
    printf( "Remainder is %d\n", remainder );
} 

// %d conversion specifier, is for decimal interger % is conversion specifier
// & is address operator precedes each variable to call to scanf
// end of function main :()