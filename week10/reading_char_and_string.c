#include <stdio.h>

int main()
{
    char x, y[ 9 ], z;

    printf( "Enter a string: " );
    scanf( "%c%c%s", &x, &z, y );

    printf( "The input was:\n" );
    printf( "the character \"%c\" ", x );
    printf( "the character \"%c\" ", z );
    printf( "and the string \"%s\"\n", y );

    return 0;
}