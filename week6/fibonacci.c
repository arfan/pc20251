#include <stdio.h>

long fibonacci( long );

int main()
{
    long result, number;

    printf( "Enter an integer: " );
    scanf( "%ld", &number );
    result = fibonacci( number );
    printf( "Fibonacci( %ld ) = %ld\n", number, result );
    return 0;
}

/* Recursive definition of function fibonacci */
long fibonacci( long n )
{
    //base case
    if ( n == 0 || n == 1 )
        return n;
    else
        return fibonacci( n - 1 ) + fibonacci( n - 2 );
}